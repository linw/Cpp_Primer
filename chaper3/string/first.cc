/*
 * MODULE NAME: first.cc
 * PROJECT: cpp_primer
 * AUTHOR: 林炜
 * DATE: October 17, 2011
 * DESCRIPTION:
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
void fun();
void fun1();
void fun_string_size_type();
int main()
{
    // fun();
    // fun1();
    fun_string_size_type();
    return 0;
}

void fun()
{
    string s1;
    string s2 = "linwei";
    string s3(s2);
    string s4("linwei");
    string s5(10,'a');
    cout<<"s1:"<<s1<<endl;
    cout<<"s2:"<<s2<<endl;
    cout<<"s3:"<<s3<<endl;
    cout<<"s4:"<<s4<<endl;
    cout<<"s5:"<<s5<<endl;

    cin>>s1>>s2;
    cout<<"new s1:"<<s1<<endl;
    cout<<"new s2:"<<s2<<endl;

}
void fun1()
{
    string s;
    while(cin>>s){
        cout<<s<<endl;
    }
}

void fun_string_size_type()
{
    string::size_type i =0;
    signed k = 0;
    string s = "jskldfj";
    i = s.size();
    k = i;
    cout<<i<<endl;   
    cout<<s.empty()<<endl; 
}
