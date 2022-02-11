#ifndef _FIGHTERAIRCRAFT_H__
#define _FIGHTERAIRCRAFT_H__

#include <iostream>
#include <string>

class FighterAircraft {
    private:
        std::string m_type;

    public:
        FighterAircraft();
        std::string getType();
        void fly();
        void fight();
};

#endif // _FIGHTERAIRCRAFT_H
