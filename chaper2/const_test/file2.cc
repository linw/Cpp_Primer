/*
 * MODULE NAME: file2.cc
 * PROJECT: cpp_primer
 * AUTHOR: 林炜
 * DATE: October 15, 2011
 * DESCRIPTION:
 */
#include <iostream>
#include "file1.cc"
extern int counter;
extern const int const_counter;
int main()
{
    std::cout<<counter<<std::endl;
    std::cout<<const_counter<<std::endl;
    return 0;
}
