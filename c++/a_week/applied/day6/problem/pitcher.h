#ifndef _PITCHER_H_
#define _PITCHER_H_

#include "BaseballPlayer.h"

class Pitcher : public BaseballPlayer{
    public:
        Pitcher(std::string name,int number);    //  コンストラクタ
        void play();    //  ピッチャーがプレイする
};

#endif //_PITCHER_H_
