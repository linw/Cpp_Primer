/*
 * MODULE NAME: 726.cpp
 * PROJECT: cpp_primer Function 7.26
 * AUTHOR: 林炜
 * DATE: October 18, 2011
 * DESCRIPTION: 
*/
#include <iostream>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s"){
    return (ctr == 1) ? word : word + ending;
};

int main()
{
    string word = "failure";
    cout<<make_plural(2, word)<<endl;
    return 0;
}
