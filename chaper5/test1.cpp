/*
 * MODULE NAME: test1.cpp
 * PROJECT: cpp_primer chaper5
 * AUTHOR: 林炜
 * DATE: Sep 21, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <bitset>
#include <windows.h>
using namespace std;

int main()
{
    int i;
    double d;
    d = i = 3.5;
    cout<<d<<i<<endl;
    i = d = 3.5;
    cout<<d<<i<<endl;
    if( i = 0)
        cout<<"Hello"<<endl;
    cout<<(i = 0)<<endl;
    int k = 10;
    int j = 4;
    int max = i>j
                ? j > k ? j:k
                : j > k ? j:k;
    cout<<max<<endl;
    return 0;
}
