#ifndef _CALC_H_
#define _CALC_H_

class Calc {
    private:
        int m_a, m_b;

    public:
        Calc();
        Calc(int, int);
        int add();
        int add(int, int);
        void setValue(int, int);
        int getA();
        int getB();
};

#endif // _CALC_H_
