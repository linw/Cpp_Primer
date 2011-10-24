/*
 * MODULE NAME: 728.cpp
 * PROJECT: cpp_primer Function 7.28
 * AUTHOR: 林炜
 * DATE: October 18, 2011
 * DESCRIPTION: 
*/
#include <iostream>

using namespace std;

int fun(){
    static int count = 0;
    return ++count;
};
int j = 0;
int main()
{
    for(int i = 0; i < 10; ++i){
        cout<<fun()<<endl;
    }
    ++j;
    if(j<100)main();
    return 0;
}
