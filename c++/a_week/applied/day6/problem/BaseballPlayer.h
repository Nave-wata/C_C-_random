#ifndef _BASEBALLPLAYER_H_
#define _BASEBALLPLAYER_H_

#include <iostream>
#include <string>

class BaseballPlayer{
protected:
    int m_number;    //  背番号
    std::string m_kind;    //  プレイヤーの種類
    std::string m_name;    //  名前

public:
    int getNumber();    //  名前の取得
    std::string getKind();    //  種類の取得
    std::string getName();    //  名前の取得
    virtual void play()=0;    //  プレイ（純粋仮関数)
};

#endif // _BASEBALLPLAYER_H_
