/*
 * MODULE NAME: 429.cpp
 * PROJECT: cpp_primer dynamic array
 * AUTHOR: 林炜
 * DATE: Sep 11, 2011
 * DESCRIPTION: 习题4.29
*/
//#define DEBUG
#include <iostream>
#include <string>
#include <cstring>
#include <time.h>

using namespace std;

void fun1()
{
    const char *cp = "Hello World!";
    const size_t len = strlen(cp);
    for(size_t ix = 0; ix != 10000000; ++ix){
        char *pc2 = new char[len+1];
        strcpy(pc2,cp);
        if(strcmp(pc2,cp))
            ;
        delete []pc2;
    }
}

void fun2()
{
    string str("Hello World!");
    for(size_t ix = 0; ix != 10000000; ++ix){
        string str1 = str;
        if(str1.compare(str))
            ;
    }
}  


int main()
{
#ifdef DEBUG
    long   i_Time_1,i_Time_2; 
    i_Time_1 = clock();
#endif
    fun1();
#ifdef DEBUG
    i_Time_2 = clock();
    cout<<(double)(i_Time_2 - i_Time_1)/CLOCKS_PER_SEC<<endl;
#endif

#ifdef DEBUG
    i_Time_1 = clock();
#endif
    fun2();
#ifdef DEBUG
    i_Time_2 = clock();
    cout<<(double)(i_Time_2 - i_Time_1)/CLOCKS_PER_SEC<<endl;
#endif

    return 0;
}