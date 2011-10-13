/*
 * MODULE NAME: char_test.cc
 * PROJECT: cpp_primer
 * AUTHOR: 林炜
 * DATE: October 14, 2011
 * DESCRIPTION:
*/
#include <iostream>
#include <stdio.h>
int main()
{
    wchar_t s;
    s = L'e';
    std::cout<<s<<std::endl;
    char s1;
    s1 = L'a';
    int a = L'e';
    std::cout<<s1<<std::endl;
    std::cout<<a<<std::endl;
    std::cout<<"Who goes with F\145rgus?\012"<<std::endl;

    // printf("\145");
    return 0;
}