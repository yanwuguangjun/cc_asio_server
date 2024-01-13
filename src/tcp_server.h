#pragma once
#include "server.h"


#include <fmt/core.h>

#include <asio/co_spawn.hpp>
#include <asio/detached.hpp>
#include <asio/io_context.hpp>
#include <asio/ip/tcp.hpp>
#include <asio/signal_set.hpp>
#include <asio/write.hpp>
#include <cstdio>
#include <iostream>
#include <cstdlib>

#include "type.pb.h"


using asio::awaitable;
using asio::co_spawn;
using asio::detached;
using asio::use_awaitable;
using asio::ip::tcp;
namespace this_coro = asio::this_coro;

#if defined(ASIO_ENABLE_HANDLER_TRACKING)
#define use_awaitable \
    asio::use_awaitable_t(__FILE__, __LINE__, __PRETTY_FUNCTION__)
#endif




awaitable<void> echo(tcp::socket socket);

awaitable<void> listener();

class TcpServer:server{
    private:
        int port = 0;   



public:
    asio::io_context & io_ctx;

    TcpServer( asio::io_context & io_ctx,int port);

    void wait_handler(const asio::error_code &error);

    void listen(){

    }

    
    awaitable<void> init(tcp::socket socket){

        auto person =  new Person();

        person->set_name("hello")

        // fmt::print("get name init %s \n" ,person->name);

        fmt::print("init \n");
        
        try
        {
            char data[1024];
            for (;;)
            {
                socket.async_wait(asio::socket_base::wait_type::wait_read, std::bind(&TcpServer::wait_handler,this,std::placeholders::_1));
                std::size_t n = co_await socket.async_read_some(asio::buffer(data), use_awaitable);
                co_await async_write(socket, asio::buffer(data, n), use_awaitable);
            }
        }
        catch (std::exception &e)
        {
            std::printf("echo Exception: %s\n", e.what());
        }
    }

    awaitable<void> listener(){
        auto executor = co_await this_coro::executor;
        tcp::acceptor acceptor(executor, {tcp::v4(), 55555});
        for (;;)
        {
            tcp::socket socket = co_await acceptor.async_accept(use_awaitable);
            fmt::print("has connect.....\n");
            co_spawn(executor, init(std::move(socket)), detached);
        }
    }

    void start(){
        co_spawn(this->io_ctx, listener(), detached);
        this->io_ctx.run();
        fmt::print("after start");
    }


    void stop(){
        this->io_ctx.stop();
    }

};


class TcpConnection: Connection{
    void disConnect(){

    }


};