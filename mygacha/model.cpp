#include "model.h"

model::model()
{
    invalid = 0;
    current = 0;
    arr = new gift [tot_num];
    for(int i = 0; i < tot_num; i++)
    {
        arr[i].setDesp("Happy Birthday!");
    }
    arr[0].setDesp("-自闭企鹅：奔三快乐（bushi）！！！");
    arr[1].setDesp("-自闭企鹅：人生的第三个十年 大胆逐你所愿");
    arr[2].setDesp("-自闭企鹅：未来会很辛苦吧 会考很多很多的试会毕业或许会读研读博会去面试会去找一份自己能接受又看起来体面的工作会哼哧瘪肚地肝ddl ");
    arr[3].setDesp("-自闭企鹅：but 不要忘了以前还是一个到了周末会美美买一杯茶颜围在桌边开座谈会 坐了好久地铁只为了去吃一碗鲜芋仙或撸一顿串串 单纯为了健康去操场跑跑步的 会自己为自己创造美好发现生活中的闪光点的 纯粹的快乐的人");
    arr[4].setDesp("-自闭企鹅：生日要快乐 不是生日也要快乐！！！");
    arr[5].setDesp("Happy Birthday!");
    arr[6].setDesp("-rei：旧图重画/doge  Congratulations! You can ask reirei for gift!");
    arr[7].setDesp("Happy Birthday!");
    arr[8].setDesp("-毛崽：转眼间崽子已经二十岁了，开启了人生的一个新的decade，祝贺！");
    arr[9].setDesp("-毛崽：认识你快四年多了，随着时间的推移认识你的年份在我生命中占的比例越来越大，以后也要一直变大。你是为数不多知道我的事情的人，hh话及此处要点名表扬你的保守秘密，感谢！");
    arr[10].setDesp("-毛崽：认识你真的是超幸运的事情，每次看到什么“你和高中的朋友还有联系吗？”之类的文案，我都超骄傲的，希望以后在敬老院里我也能说“那还用问！”。");
    arr[11].setDesp("-毛崽：祝你年年岁岁不挂科，朝朝暮暮有帅哥；嗑的CP都发糖，都HE；追的星永不塌房；赚大大的钱钱，过快快乐乐的生活！");
    arr[12].setDesp("-毛崽：海底捞/绿茶餐厅/潇湘阁/任意吃喝玩乐清单上的一家 的就餐券*1+优秀北外学子陪同就餐  Congratulations! You can ask 毛崽 for gift!");
    arr[13].setDesp("Happy Birthday!");
    arr[14].setDesp("-van琪：老薇生日快乐！恭喜你提前迈入二十岁的门槛！早点来天津找我wan！ Congratulations! You can ask van琪 for gift!");
    arr[15].setDesp("Happy Birthday!");
    arr[16].setDesp("-江涵还是江寒：fxw，aka werz，我的初中同学，高中同学，在任瓜友。今天二——十——啦——");
    arr[17].setDesp("-江涵还是江寒：就算曾经吃瓜太欢出过事故，但她重整作风，依旧对新鲜事物保持热情，希望她在接下来的日子依旧保持劲头！");
    arr[18].setDesp("-江涵还是江寒：在这个塌房如流水，崩设如干饭的时代，她头也不回义无反顾地追星。什么叫快活的在前方快活，爽到是爽到，要继续保持精神！");
    arr[19].setDesp("-江涵还是江寒：总之，生日快乐！记得来要礼物！ Congratulations! You can ask jh for gift!");
    arr[20].setDesp("Happy Birthday!");
    arr[21].setDesp("-vanvan：的确，修行，一定要谨防造口业。不听是非，不传是非，这是一种做人的基本素养。日常生活中，我们把说话当成再平常不过的事，可是要知道，我们说的每一句话都要负责任。修行人不该谈论他人是非，谈论是非，除了蒙蔽自己心性，还会让自己内心陷入纷扰、不安的状态，障碍我们的解脱之道。生日快乐。");
    arr[22].setDesp("-vanvan：我也觉得，玛卡巴卡是白色的，乌西迪西是花的，玛卡巴卡的应援色应该用白色，不应该用彩虹色，不然和我们乌西迪西撞车多不好看，大家都是花园宝宝圈的，在挑选应援色的时候要考虑到别家的，毕竟这是宝宝花园不是玛卡巴卡花园。生日快乐");
    arr[23].setDesp("-vanvan：没错你是个明白人我明白你明白的意思我也是明白人明白人就应该明白我明白你明白的意思只要大家都明白明白人应明白我明白你明白的意思这样网络环境就是充满明白人明白其他明白人所明白的事生日快乐。");
    arr[24].setDesp("-仙女：Congratulations! You can ask 仙女 for gift!");
}

bool model::gachaRandom()
{
    if(isFinished())
        return false;

    int choosed = current;
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    while(arr[choosed].isFetched)
    {
        choosed = qrand()%tot_num;
    }

    current = choosed;
    arr[current].isFetched=1;
    invalid++;
    return true;
}

string model::showDesp(int num)
{
    return arr[num].getDesp();
}
