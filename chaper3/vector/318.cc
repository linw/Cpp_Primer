/*
 * MODULE NAME: 318.cc
 * PROJECT: cpp_primer vector
 * AUTHOR: 林炜
 * DATE: October 23, 2011
 * DESCRIPTION: 习题 3.18
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
        int k;
        cin>>k;
        ivec.push_back(k);
    }
    for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter){
        *iter *= 2;
    }
    for(vector<int>::const_iterator iter = ivec.begin(); iter != ivec.end(); ++iter){
        cout<<*iter<<endl;
    }  
}