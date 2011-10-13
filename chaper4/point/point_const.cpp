/*
 * MODULE NAME: point_const.cpp
 * PROJECT: cpp_primer point
 * AUTHOR: 林炜
 * DATE: October 28, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const size_t arr_se = 10;
    int array[arr_se] = {0,1,1,2,3,5,8,13,21,34};
    const int *const pt = array;
    // *pt = 100;
    cout<<*pt<<endl;
    return 0;
}


