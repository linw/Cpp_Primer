/*
 * MODULE NAME: study_bitset.cc
 * PROJECT: cpp_primer bitset
 * AUTHOR: 林炜
 * DATE: October 23, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <limits.h>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::bitset;




int main()
{
    string s = "11001111110001";
    bitset<512> bitvec(101010);
    // bitvec.flip();
    cout<<bitvec.count()<<endl;
    // cout<<bitvec<<endl;
    // bitvec.set();
    bitvec.flip(0);
    cout<<bitvec<<endl;
    for(size_t i = 0; i < bitvec.size(); ++i){
        if(bitvec[i])cout<<i<<endl;
    }
    cout<<bitvec.to_ulong()<<endl;
    return 0;
}
