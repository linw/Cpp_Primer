/*
 * MODULE NAME: 425.cpp
 * PROJECT: cpp_primer charlist
 * AUTHOR: 林炜
 * DATE: October 29, 2011
 * DESCRIPTION: 习题4.25
*/
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int myStringCmp(const char *src, const char *dst)
{
    int ret = 0 ;
    while( ! (ret = *(unsigned char *)src - *(unsigned char *)dst)  && *dst)
        ++src, ++dst;
    if ( ret < 0 )
        ret = -1 ;
    else if ( ret > 0 )
        ret = 1 ;
    return( ret );
};

int myStringCmp1(const string &src, const string &dst)
{
    int ret = 0;
    size_t s = 0;
    size_t d = 0; 
    while(!(ret = (unsigned char)src[s] - (unsigned char)src[d]) &&
          s != dst.size())
        ++s, ++d;
    if ( ret < 0 )
        ret = -1 ;
    else if ( ret > 0 )
        ret = 1 ;
    
    return ret;
}



int main()
{
    char *cp1 = "abcdefgh";
    char *cp2 = "abcdefghi";
    string s1 = "abcdefgh";
    string s2 = "abcdefg";
    if(myStringCmp(cp1,cp2)==0)cout<<"="<<endl;
    else if(myStringCmp(cp1,cp2)>0)cout<<">"<<endl;
    else cout<<"<"<<endl;

    if(myStringCmp1(s1,s2)==0)cout<<"="<<endl;
    else if(myStringCmp1(s1,s2)>0)cout<<">"<<endl;
    else cout<<"<"<<endl;
    return 0;
}
