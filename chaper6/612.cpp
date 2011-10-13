/*
 * MODULE NAME: 612.cpp
 * PROJECT: cpp_primer point
 * AUTHOR: 林炜
 * DATE: October 12, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s1,s2;
    size_t count = 0;
    size_t max = 0;
    string max_s;
    cin>>s1;
    max = count = 1;
    while(cin>>s2){
        if(s2 == s1)
            ++count;
        else {
            if(count >= max){
                max_s = s1;
                max = count;
            }
            s1 = s2;
            //cout<<max_s<<max<<endl;
            cout<<count<<endl;
            count = 1;
        }            
    }
    if(count >= max){
        max_s = s1;
        max = count;
    }
    cout<<max_s<<max<<endl;
    return 0;
}
