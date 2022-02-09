#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"

class Ambulance : public Car {
    public:
        Ambulance();
        virtual ~Ambulance();
        void savePeople();

    private:
        int m_number;
};

#endif // _AMBULANCE_H_
