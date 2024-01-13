#pragma once
#include <sdkddkver.h>

class server{
    public:
        virtual void listen() = 0;

        virtual void start() = 0;

        virtual void stop() = 0;
};

class Connection {
    public:
        virtual void disConnect() = 0;
};