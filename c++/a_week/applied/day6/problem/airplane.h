#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include <iostream>
#include <string>

class Airplane {
    protected:
        std::string m_type;

    public:
        std::string getType();
        virtual void fly();
};

#endif // _AIRPLANE_H_
