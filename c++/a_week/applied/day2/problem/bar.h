#ifndef _BAR_H_
#define _BAR_H_

class Foo;

class Bar {
    private:
        Foo* m_pFoo;

    public:
        Bar(Foo*);
        void func1(Foo*);
        void func2();
};

#endif // _BAR_H_
