/*
 * MODULE NAME: test.cpp
 * PROJECT: cpp_primer chaper5
 * AUTHOR: 林炜
 * DATE: Sep 11, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <bitset>
#include <windows.h>
using namespace std;
int main()
{
    bitset<1000000> b;
    b.set(27);
 //   cout<<b<<endl;
    unsigned long lb = 0;
    lb = 1UL<<27;
    // cout<<hex<<(1UL<<27)<<endl;
    // cout<<hex<<lb<<endl;
    // Sleep(10000);

    // cout<<hex<<(100|200)<<endl;
    cout<<10<<endl;

    int i = 0;
    if(cin>>i){
        cout<<"OK"<<endl;        
    }
    else cout<<"not ok"<<endl;
    return 0;
}