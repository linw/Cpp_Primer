/*
 * MODULE NAME: 618.cpp
 * PROJECT: cpp_primer point
 * AUTHOR: 林炜
 * DATE: October 13, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
// int i = 0;
int main(){
    // cout<<"hello world!"<<i<<endl;
    // ++i;
    // main();
    string s1, s2;
    cout<<"Quit the program you can type in 'quit' twice"<<endl;
    do{
        cin>>s1>>s2;
        if(s1 < s2) cout<<s1<<endl;
        else cout<<s2<<endl;
    }while((s1 != s2)||(s1 != "quit"));
    return 0;

}
