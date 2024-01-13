#include "server.h"
#include "tcp_server.h"


TcpServer::TcpServer( asio::io_context & io_context,int port): io_ctx(io_context){

    this->port = port;
}

void TcpServer::wait_handler(const asio::error_code &error)
{

    fmt::print("wait  %d",error.value());


    std::cout << error.message() << std::endl;
    if(error == asio::error::eof){
        fmt::print("closed \n");
    }
    if (!error)
    {
        fmt::print("wait_handler \n");
    }
}

