/*
 * MODULE NAME: practic_test.cc
 * PROJECT: cpp_primer
 * AUTHOR: 林炜
 * DATE: October 14, 2011
 * DESCRIPTION:
 */
#include <iostream>
using namespace std;
extern int i = 0;// 只能在函数外部使用这种形式
double calc()
{
    return 1.01454;
};
int main()
{
    int month = 9, day = 7;
    int month1 = 011, day1 = 07;
    cout<<month<<endl<<day<<endl;
    cout<<month1<<endl<<day1<<endl;
    // int input_value;
    // cin>>input_value;
    // cout<<input_value<<endl;
    double calc1 = calc();
    cout<<calc1<<endl;
    int k;
    cout<<k<<endl;
    // extern int i = 0;// 只能在函数外部使用这种形式
    // int i;
    cout<<i<<endl;
    return 0;
}
