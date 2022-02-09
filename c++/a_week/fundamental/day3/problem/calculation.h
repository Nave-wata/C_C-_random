#ifndef _CALCULATION_H_
#define _CALCULATION_H_

class Calculation {
    private:
        int m_number1;
        int m_number2;

    public:
        void setNumber1(int);
        void setNumber2(int);
        int getNumber1();
        int getNumber2();
        int add();
        int sub();
};

#endif // _CALCULATION_H_
