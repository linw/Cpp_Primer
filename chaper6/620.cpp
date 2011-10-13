/*
 * MODULE NAME: 620.cpp
 * PROJECT: cpp_primer 
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
    string s1, s2;
    cin>>s1;
    bool flag = false;
    int count = 1;
    while(cin>>s2){
        if(s2 == s1) ++count;
        else {
            s1 = s2;
            count = 1;
        }
        if(count == 4) {
            flag = true;
            break;
        }
    }
    if(flag) cout<<s2<<endl;
    else cout<<"no consistor words!"<<endl;
    return 0;
}
