/*
 * MODULE NAME: 41.cc
 * PROJECT: cpp_primer array
 * AUTHOR: 林炜
 * DATE: October 23, 2011
 * DESCRIPTION:习题 4.1 
*/
#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int get_size()
{
    int i = 1024;
    return i;
}
int main()
{
    unsigned buf_size = 1024;
    int ia[buf_size];
    int ia1[get_size()];
    int ia2[4*7-14];
    char st[12] = "fundamental";
}

