/*
 * MODULE NAME: 43.cpp
 * PROJECT: cpp_primer array
 * AUTHOR: 林炜
 * DATE: October 27, 2011
 * DESCRIPTION:习题 4.3 
*/
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int ia[7] = {0,1,1,2,3,4,5};
    vector<int> ivec = {0,1,1,2,3,5,8};//error, ivec must be initialized by constructor, not by '{...}'
    int ia2[] = ia; //initializer fails to determine size of 'ia2'
    int ia3[] = ivec; //initializer fails to determine size of 'ia3'
    return 0;
}