//
// Created by duhieub on 11/9/17.
//

#ifndef EXISTENZIA_IMESSAGE_HPP
#define EXISTENZIA_IMESSAGE_HPP

#include <iostream>

namespace xzia {
    class IMessage {
    public:
        virtual bool hasBody() = 0;
        virtual std::string &getBody() = 0;
        virtual void setBody(std::string const&) = 0;
        virtual std::string &getHeader() = 0;
        virtual void setHeader(std::string const&) = 0;
    };
}

#endif //EXISTENZIA_IMESSAGE_HPP
