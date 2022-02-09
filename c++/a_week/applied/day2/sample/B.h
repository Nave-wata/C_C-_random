#ifndef _B_H_
#define _B_H_

class A; // クラスAへの参

class B {
    private:
        A* m_pA;

    public:
        B(A*);
        void hoge();
};

#endif // _B_H_
