//
// Created by Pierre Bougon on 31/10/17.
//

#ifndef EXISTENZIA_ICORE_HPP_
#define EXISTENZIA_ICORE_HPP_

/**
 * \file ICore.hpp
 * \brief
 * \author Pierre.B
 * \version 0.1
 * \date 13 novembre 2017
 *
 * add comment here
 *
 * \namespace xzia
 * \enum Step
 * \class ICore ICore.hpp ICore.hpp
 */
namespace xzia {
    enum class Step : unsigned char {
        CONTINUE = 0,
        STOP,
        ERROR
    };

    class ICore {

        /**
         *
         * \fn run
         * \brief Main logic of the server, loop while the server is up
         *
         */
        virtual void run() = 0;
    };
}

#endif // !EXISTENZIA_ICORE_HPP_