/*
 * MODULE NAME: 315.cc
 * PROJECT: cpp_primer vector
 * AUTHOR: 林炜
 * DATE: October 23, 2011
 * DESCRIPTION: 习题 3.15
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
    for(vector<int>::size_type i = 0; i != 20; i++)
        ivec.push_back(i);
    
    for(vector<int>::const_iterator iter = ivec.begin();
            iter != ivec.end(); ++iter)
            cout<<*iter;
        

    for(vector<int>::iterator iter = ivec.begin(); 
                              iter != ivec.end(); iter++)
        *iter = 0;
    for(vector<int>::const_iterator iter = ivec.begin();
            iter != ivec.end(); ++iter)
        cout<<*iter;
    
    return 0;
}