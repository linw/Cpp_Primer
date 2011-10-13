/*
 * MODULE NAME: scop_test.cc
 * PROJECT: cpp_primer
 * AUTHOR: 林炜
 * DATE: October 15, 2011
 * DESCRIPTION:
 */
#include <iostream>
int i = 10;
int main()
{
    int sum = 0;
    for(int i = 0; i <= 100; i++)
        sum += i;
    
    std::cout<<sum<<std::endl;
    int i = 100;
    std::cout<<i<<std::endl;

    for(int i = 0; i<1000; i++)
        sum += i;
    std::cout<<i<<std::endl;

    return 0;
}
