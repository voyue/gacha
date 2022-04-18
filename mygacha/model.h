#ifndef MODEL_H
#define MODEL_H
#include <QTime>

#include "gift.h"

const int tot_num=50;

class model
{
private:
    int invalid; //已被抽取礼物数量
    gift *arr;

public:
    int current; //当前抽中

    model();

    bool gachaRandom();
    bool isFinished()
    {
        if(invalid == tot_num)
            return true;
        else
        return false;
    }
    string showDesp(int num);
};

#endif // MODEL_H
