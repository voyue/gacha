#ifndef GIFT_H
#define GIFT_H
#include <string>

using namespace std;

class gift
{
public:
    bool isFetched; //是否被抽取
    string description;

    gift();

    string getDesp(){return description;}
    void setDesp(string _desp){description = _desp;}
};

#endif // GIFT_H
