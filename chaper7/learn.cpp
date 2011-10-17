/*
 * MODULE NAME: learn.cpp
 * PROJECT: cpp_primer Function 7.5 7.6
 * AUTHOR: 林炜
 * DATE: October 14, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fun75(int a, int *p){
    return a > *p ? a : *p;
};

void fun76(int &a, int &b){
    a = a^b;
    b = a^b; 
    a = a^b;
}

int test(int *&a){
    cout<<*a<<endl;
}

int test1(int (&arr)[10]){
    
};

int main()
{
    int a,b;
    a = 10;
    b = 11;
    cout<<fun75(a, &b)<<endl;
    fun76(a, b);
    cout<<a<<b<<endl;
    int *p = &a;
    test(p);
    int king[9];
    test1(king);

    return 0;
}
