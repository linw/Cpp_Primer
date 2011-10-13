/*
 * MODULE NAME: point_study.cpp
 * PROJECT: cpp_primer point
 * AUTHOR: 林炜
 * DATE: October 28, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <cctype>
#include <bitset>
using std::cout;
using std::cin;
using std::endl;
using std::bitset;

int main()
{
    int *p = 0;
    int i = 100;
    int j = 100;
    // const int c_ival = 100;
    // p = c_ival;
    
    p = &i;
    int *anything = &i;
    cout<<"*p:"<<p[-3]<<" "<<*(p++)<<endl;
    p++;
    cout<<"p:"<<&p<<endl;
    cout<<"i:"<<&i<<endl;
    cout<<"j:"<<&j<<endl;
    cout<<"anything:"<<&anything<<endl;

    bool b1,b2;
    cout<<"b1:"<<&b1<<endl;
    cout<<"b2:"<<&b2<<endl;
    bool *pb1;
    bool *pb2;
    pb1 = &b1;
    pb2 = &b2;
    ptrdiff_t n = pb1 - pb2;
    cout<<"ptr diff:"<<n<<endl;
    cout<<"n:"<<&n<<endl;

    bitset<32> bs1;
    bitset<33> bs2;
    cout<<"bitset1:"<<&bs1<<endl;
    cout<<"bitset2:"<<&bs2<<endl;

    char a0 = '\0';
    char a = 'b';
    // char a1 = '\0';
    void *pa = &a;
    cout<<"char a:"<<&a<<endl;
    cout<<"a ptr:"<<pa<<endl;

    char *pa1 = &a;

    cout<<pa1[1]<<endl;
    cout<<pa1[0]<<endl;



    return 0;
}
