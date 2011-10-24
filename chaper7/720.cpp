/*
 * MODULE NAME: 720.cpp
 * PROJECT: cpp_primer Function 7.20
 * AUTHOR: 林炜
 * DATE: October 18, 2011
 * DESCRIPTION: 
*/
#include <iostream>

using namespace std;

int factorial(int val){
    long res = 1;
    while(val !=1 ){
        res *= val--;
    }
    return res;
};

int fun(int a, int b = 1, int c = 2){
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}
int main()
{
    cout<<factorial(5)<<endl;
    fun(0);
    return 0;
}

