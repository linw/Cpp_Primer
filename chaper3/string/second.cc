/*
 * MODULE NAME: second.cc
 * PROJECT: cpp_primer
 * AUTHOR: 林炜
 * DATE: October 19, 2011
 * DESCRIPTION:
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
void test_string_plus()
{
    string s1 = "abcdefg";
    string s2 = "hijklmn";
    string s3 = "opqrstu";
    string s4 = s1 + s2 + s3 + "vwxyz";
    cout<<s4<<endl;
};

void test_string_inter()
{
    string s1 = "kinglw";
    void *p = &s1;
    for(int i = 0; i != 100; i++){
        cout<<((char *)p)[i];        
    }
    cout<<endl;
    cout<<s1[-2]<<endl;    
};

void test_string_cctype()
{

    string s1 = "12a.41584";
    cout<<"put in a string:"<<endl;
    cin>>s1;
    cout<<"put in a index:"<<endl;
    int i = 0;
    cin>>i;
    if(isalnum(s1[i]))
        cout<<"num or char"<<endl;
}

int main()
{
    test_string_plus();  
    test_string_inter(); 
    test_string_cctype(); 
}
