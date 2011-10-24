/*
 * MODULE NAME: 730.cpp
 * PROJECT: cpp_primer Function 7.30
 * AUTHOR: 林炜
 * DATE: October 18, 2011
 * DESCRIPTION: 
*/
#include "730.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "hello";
    string s2 = "hello world";
    if(isShorter(s1, s2)) cout<<"yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
