#include "tcp_server.h"

int main()
{

    try
    {
        asio::io_context io_context(1);
        asio::signal_set signals( io_context, SIGINT, SIGTERM);
        signals.async_wait([&io_context](const asio::error_code& error, int signal_number) { io_context.stop(); });

        auto server = new TcpServer(io_context,6666);
        server->start();
    }
    catch (std::exception &e)
    {
        std::printf("Exception: %s\n", e.what());
    }
    return 1;
}