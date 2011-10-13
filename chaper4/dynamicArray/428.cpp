/*
 * MODULE NAME: 428.cpp
 * PROJECT: cpp_primer dynamic array
 * AUTHOR: 林炜
 * DATE: Sep 11, 2011
 * DESCRIPTION: 习题4.28
*/

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vi;
    int k = 0;
    while(cin>>k){
        vi.push_back(k);
    }
    size_t vsize = vi.size();
    int *ip = new int[vsize];
    size_t i = 0;
    for(vector<int>::iterator iter = vi.begin(); iter != vi.end(); ++iter,++i){
        ip[i] = *iter;
    }
    for(i = 0; i != vsize; ++i){
        cout<<ip[i];
    }
    return 0;
}