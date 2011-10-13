/*
 * MODULE NAME: enum_test.cc
 * PROJECT: cpp_primer
 * AUTHOR: 林炜
 * DATE: October 14, 2011
 * DESCRIPTION:
 */
#include <iostream>
int main()
{
    enum test_enum{one = 1, two, three = 2};//枚举成员的值可以不唯一
    std::cout<<one<<std::endl;
    std::cout<<two<<std::endl;
    std::cout<<three<<std::endl;
    return 0;
}
