/*
 * MODULE NAME: 322.cc
 * PROJECT: cpp_primer vector
 * AUTHOR: 林炜
 * DATE: October 23, 2011
 * DESCRIPTION: 习题 3.22
*/
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<int> ivec;
    for(vector<int>::size_type index = 0; index < 10; ++index){
        ivec.push_back(index);
    }
    vector<int>::iterator iter = ivec.begin() + ivec.size()/2;
    cout<<*iter<<endl;
}
