/*
 * MODULE NAME: 314.cc
 * PROJECT: cpp_primer vector
 * AUTHOR: 林炜
 * DATE: October 22, 2011
 * DESCRIPTION: 习题 3.14
*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
void readTxt(vector<string>& data)
{
    string tmp;
    while(cin>>tmp)
        data.push_back(tmp);
};

string StringToUpper(string s)
{
    for(string::size_type index = 0; index != s.size(); index++)
        if(islower(s[index]))
            s[index] = toupper(s[index]);
    return s;
};

void transform(vector<string>& data)
{
    for(vector<string>::size_type index = 0; index != data.size(); index++)
        data[index] = StringToUpper(data[index]);
};

void printString(string s){
    for(string::size_type index = 0; index != s.size(); index++)
        cout<<s[index];
};

void print(vector<string>& data)
{
    for(vector<string>::size_type index = 0; index != data.size(); index++){
        // printString(data[index]);
        cout<<data[index]<<" ";
        if(index%8 == 0) cout<<endl;
    }
}

void fun()
{
    vector<string> data;
    string tmp;
    while(cin>>tmp)
        data.push_back(tmp);  
    for(vector<string>::size_type index = 0; index != data.size(); index++){
        for(string::size_type i = 0; i != data[index].size(); i++)
            if(islower(data[index][i]))
                data[index][i] = toupper(data[index][i]);
    }  
    cout<<"data size:"<<data.size()<<endl;
    cout<<data[0]<<data[1]<<data[2]<<endl;
    for(vector<string>::size_type index = 0; index != data.size(); index++){
        // printString(data[index]);
        cout<<data[index]<<" ";
        if(index%8 == 0) cout<<endl;
    }
}

int main()
{
    // vector<string> data;
    // readTxt(data);
    // cout<<"data size:"<<data.size()<<endl;
    // // string k = "asdas";
    // // printString(k);
    // transform(data);
    // print(data);    
     
    fun();  
}
