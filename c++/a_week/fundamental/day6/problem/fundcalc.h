#ifndef _FUNCCALC_H_
#define _FUNCCALC_H_

class FundCalc {
    private:
        double m_number1;
        double m_number2;

    public:
        FundCalc();
        void setNumber1(double);
        void setNumber2(double);
        double getNumber1();
        double getNumber2();
        double add();
        double sub();
};

#endif // _FUNCCALC_H_
