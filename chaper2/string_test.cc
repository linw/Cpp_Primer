/*
 * MODULE NAME: string_test.cc
 * PROJECT: cpp_primer
 * AUTHOR: 林炜
 * DATE: October 14, 2011
 * DESCRIPTION:
*/
#include <iostream>
#include <string>

int main()
{
    std::string s = "sjlkdjflsd";
    std::cout<<s<<std::endl;
    std::string s1(10, 'a');//这种利用计数器和字符的初始化方法中的字符只能用一个字符，用字符串会报错
    std::cout<<s1<<std::endl;
    return 0;
}