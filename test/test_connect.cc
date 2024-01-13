#include <gtest/gtest.h>
#include <fmt/core.h>
#include "math.h"
#include <iostream>  
#include <filesystem> // C++17引入的文件系统库  
#include <cstdlib>

#include <fstream>
#include "tcp_server.h"

using namespace std;


// 使用gtest测试TcpServer
TEST(TcpServerTest, StartTest) {
    // 创建 io_context
    asio::io_context io_context(1);

    // 创建 tcp server
    asio::signal_set signals( io_context, SIGINT, SIGTERM);
    signals.async_wait([&io_context](const asio::error_code& error, int signal_number) { io_context.stop(); });

    auto server = new TcpServer(io_context,6666);

    // 启动服务器
    std::thread server_thread([&](){
        fmt::print("server.start  \n");
        server->start();
    });



    server_thread.detach();
    // 创建 tcp client
  
    asio::io_context io_context_(1);
    asio::signal_set signals_( io_context_, SIGINT, SIGTERM);
    signals_.async_wait([&io_context_](const asio::error_code& error, int signal_number) { io_context_.stop(); });

    asio::ip::tcp::socket client_socket(io_context_);
    asio::ip::tcp::endpoint endpoint(asio::ip::address::from_string("127.0.0.1"), 55555);

    // client_socket.connect(endpoint);
    int connected = 0;
    client_socket.async_connect(endpoint, [&](const asio::error_code& error){
        if (!error) {
            fmt::print("connected successfully\n");
            // 在连接成功后进行相应的操作
            io_context_.stop();
            connected = 1;
        } else {
            fmt::print("connection failed: {}\n", error.message());
        }
    });

    io_context_.run();
    
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    
    return RUN_ALL_TESTS();
}
