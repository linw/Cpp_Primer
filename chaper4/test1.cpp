/*
 * MODULE NAME: test1.cpp
 * PROJECT: cpp_primer chaper4
 * AUTHOR: 林炜
 * DATE: Sep 11, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string *a = new string("Hello world!");
    const char *cp = a->c_str();
    cout<<cp<<endl;

    //4.32
    const size_t len = 10;
    int b[len] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> iv(b,b+len);
    for(vector<int>::iterator iter = iv.begin(); iter != iv.end(); ++iter)
        cout<<*iter<<endl;

    //4.33
    const size_t len1 = iv.size();
    int *c = new int[len1];
    size_t i = 0;
    for(vector<int>::iterator iter = iv.begin(); iter != iv.end(); ++iter,++i){
        c[i] = *iter;
        cout<<c[i]<<endl;
    }

    

    return 0;
}
