#ifndef _CATCHAR_H_
#define _CATCHAR_H_

#include "BaseballPlayer.h"

class Catcher : public BaseballPlayer {
    public:
        Catcher(std::string name,int number);    //  コンストラクタ
        void play();    //  キャッチャーがプレイする
};

#endif // _CATCHAR_H_
