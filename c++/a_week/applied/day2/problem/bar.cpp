#include "bar.h"
#include "foo.h"
#include <iostream>

using namespace std;

Bar::Bar(Foo* pFoo) {
    m_pFoo = pFoo;
}

void Bar::func1(Foo* pFoo) {
    pFoo->hoge();
}

void Bar::func2() {
    cout << "Bar::func2()" << endl;
}
