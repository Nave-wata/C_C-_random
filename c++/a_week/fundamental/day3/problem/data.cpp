#include "data.h"

void Data::init() {
    number = 0;
    comment = "";
}

void Data::setNumber(int num) {
    number = num;
}

void Data::setComment(string str) {
    comment = str;
}

int Data::getNumber() {
    return number;
}

string Data:: getComment() {
    return comment;
}
