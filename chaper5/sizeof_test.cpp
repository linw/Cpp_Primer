/*
 * MODULE NAME: sizeof_test.cpp
 * PROJECT: cpp_primer chaper5
 * AUTHOR: 林炜
 * DATE: Sep 21, 2011
 * DESCRIPTION: 
*/
#include <iostream>
using namespace std;
class A{
    int b[100];
};
int fun1(){
    cout<<"fun1"<<endl;
    return 2;
}
int fun2()
{
    cout<<"fun2"<<endl;
    return 1;
}
int main()
{
    int a[100];
    cout<<sizeof(a)<<endl;
    int *p = a;
    cout<<sizeof(p)<<endl;
    A aa;
    cout<<sizeof(aa)<<endl;
    A *pa;
    cout<<sizeof(*pa)<<endl;
    int k = fun1()*fun2();
    return 0;
}
