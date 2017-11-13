//
// Created by Pierre Bougon on 31/10/17.
//

#ifndef EXISTENZIA_ICORE_HPP_
#define EXISTENZIA_ICORE_HPP_

namespace xzia
{
    enum class Step : unsigned char
    {
        CONTINUE = 0,
        STOP,
        ERROR
    };

    class ICore
    {
        virtual void run() = 0;
    };
}

#endif // !EXISTENZIA_ICORE_HPP_
