#include<iostream>
#include<time.h>
#include<stdlib.h>

int main()
{

    srand((unsigned)(time(0)));
    int cnt=0;
    int cnt2=0;
    int cnt3=0;
    for(int i=0;i<10000;i++)
    {
        int cnt1=rand()%9999;
        std::cout<<cnt1<<std::endl;
        if(cnt1>5000)
        {
            ++cnt;
        }
        if(cnt1<5000)
        {
            ++cnt2;
        }
        if(cnt1==5000)
        {
            ++cnt3;
        }

    }
    std::cout<<"����5000������"<<cnt<<std::endl;
    std::cout<<"С��5000������"<<cnt2<<std::endl;
    std::cout<<"����5000������"<<cnt3<<std::endl;
    return 0;
}
