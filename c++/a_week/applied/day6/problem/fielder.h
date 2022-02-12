#ifndef _FIELDER_H_
#define _FIELDER_H_

#include "BaseballPlayer.h"

class Fielder : public BaseballPlayer{
    public:
        Fielder(std::string name,int number);    //  コンストラクタ
        void play();    //  野手がプレイする
};

#endif // _FIELDER_H_
