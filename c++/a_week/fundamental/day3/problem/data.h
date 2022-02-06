#ifndef _DATA_H_
#define _DATA_H_

#include <iostream>
#include <string>

using namespace std;

class Data {
    public:
        void init();
        void setNumber(int);
        void setComment(string);
        int getNumber();
        string getComment();

    private:
        int number;
        string comment;
};

#endif // _DATA_H_
