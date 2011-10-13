/*
 * MODULE NAME: 418.cpp
 * PROJECT: cpp_primer point
 * AUTHOR: 林炜
 * DATE: October 28, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <cctype>
#include <bitset>
using std::cout;
using std::cin;
using std::endl;
using std::bitset;

int main()
{
    const int arr_se = 10;
    int arr[arr_se] = {0,1,1,2,3,5,8,13,21,34};
    for(int *arrBegin = arr,*arrEnd = arr + arr_se; 
            arrBegin != arrEnd; ++arrBegin){
        *arrBegin = 0;
    }
    for(int *arrBegin = arr,*arrEnd = arr + arr_se; 
            arrBegin != arrEnd; ++arrBegin){
        cout<<*arrBegin<<endl;
    }
    return 0;
}
