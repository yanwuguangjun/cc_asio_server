
#include "udp_server.h"
#include <fmt/core.h>

#include <asio/co_spawn.hpp>
#include <asio/detached.hpp>
#include <asio/io_context.hpp>
#include <asio/ip/tcp.hpp>
#include <asio/signal_set.hpp>
#include <asio/write.hpp>
#include <cstdio>
#include <iostream>

#include "server.h"

// int main(){
//     std::cout << "hell0"   ;
// }