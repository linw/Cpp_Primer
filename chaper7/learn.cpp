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
    int king[10] = {1,2,3,4,5,6,7,8,9,0};
    test1(king);
    
    int (*matrix)[10];
    matrix = &king;
    for(int i = 0; i < 10; i++){
        cout<<(*matrix)[i]<<endl;
        cout<<matrix[i]<<endl;
    }


    return 0;
}
