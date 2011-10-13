/*
 * MODULE NAME: test.cpp
 * PROJECT: cpp_primer dynamic array
 * AUTHOR: 林炜
 * DATE: Sep 29, 2011
 * DESCRIPTION: 
*/

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string *ps = new string[10]();
    ps[0] = "king";
    ps[1] = "l";
    ps[2] = "i";
    ps[3] = "n";
    ps[4] = "w";
    ps[5] = "e";
    ps[6] = "i";
    for(size_t i = 0; i < 10; ++i){
        cout<<ps[i];
    }
    cout<<endl;
    cout<<hex<<ps++<<endl;
    cout<<hex<<ps++<<endl;

    double *ip = new double[10]();
    cout<<ip++<<endl;
    cout<<ip++<<endl;
//  cout<<hex<<(void *)ps - (void *)ps1<<endl;
    
    int *ip1 = new int[0];
    cout<<*ip1<<endl;   
    
    return 0;
}