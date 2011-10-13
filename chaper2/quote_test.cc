/*
 * MODULE NAME: file2.cc
 * PROJECT: cpp_primer
 * AUTHOR: 林炜
 * DATE: October 15, 2011
 * DESCRIPTION:
 */
#include <iostream>

int main()
{
    int ival = 1024;
    int &ival1 = ival;
    // int &ival2 = 10;
    std::cout<<"ival:"<<ival<<std::endl;
    ival = 512;
    std::cout<<"ival1:"<<ival1<<std::endl;
    // std::cout<<"ival2:"<<ival2<<std::endl;
    return 0;
}