/*
 * MODULE NAME: 715.cpp
 * PROJECT: cpp_primer Function 7.15
 * AUTHOR: 林炜
 * DATE: October 17, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <stdio.h>
using namespace std;

void fun(int a, ...){
    cout<<"hello world!"<<endl;
}

int main(int argc, char *argv[])
{
    double sum = 0;
    for(size_t i = 1; i < argc; ++i){
        sum += atoi(argv[i]);
    }
    cout<<sum<<endl;
    fun(1);
    printf("1",2,3);
    return 0;
}
