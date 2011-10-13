/*
 * MODULE NAME: 619.cpp
 * PROJECT: cpp_primer point
 * AUTHOR: 林炜
 * DATE: October 13, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    int value = 4;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vector<int>::iterator iter = vec.begin();
    while((++iter != vec.end()) && (value != *iter) ){}
    cout<<*iter<<endl;
    return 0;
    
}
