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
// #include <exception>
#include <stdexcept>

using namespace std;

int main()
{

    int *p = (int*)154645;
    assert(true);
    cout<<"pass through the assert()"<<endl;
    assert(cin);

    try{
        cout<<*p<<endl;
    }catch(exception err){
        cout<<err.what()<<endl;
    }
    return 0;
}
