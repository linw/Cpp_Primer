/*
 * MODULE NAME: string_study.cpp
 * PROJECT: cpp_primer charlist
 * AUTHOR: 林炜
 * DATE: October 29, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <cstring>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const char *cp1 = "impossibl";
    const char *cp2 = "impossible is nothing!";
    if(strcmp(cp1,cp2) > 0) cout<<">"<<endl;
    else if(strcmp(cp1,cp2) < 0) cout<<"<"<<endl;
    else cout<<"="<<endl;

    char ac[20];
    cout<<"cp2 len:"<<strlen(cp2)<<endl;
    cout<<"cp1 len:"<<strlen(cp1)<<endl;
    strncpy(ac,cp1,strlen(cp1));
    // ac[15] = '\0';
    if(ac[strlen(cp1)]==0)cout<<"null add"<<endl;
    else cout<<"null not add"<<endl;
    cout<<ac<<endl;
    return 0;
}
