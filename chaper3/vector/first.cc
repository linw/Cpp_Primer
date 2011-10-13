/*
 * MODULE NAME: first.cc
 * PROJECT: cpp_primer
 * AUTHOR: 林炜
 * DATE: October 19, 2011
 * DESCRIPTION:
*/
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


void test_vector_basic()
{
    vector<int> ivec(10);
    for(vector<int>::size_type index = 0; index != ivec.size(); index++)
        cout<<ivec[index]<<endl;
    vector<string> svec(10,"king");
    for(vector<string>::size_type index1 = 0; index1 != svec.size(); index1++)
        cout<<svec[index1]<<endl;
    vector< vector<int> > vvec;
    vvec.push_back(ivec);
    vvec[1];

};

int main()
{
    int i;
    test_vector_basic();
    return 0;
}