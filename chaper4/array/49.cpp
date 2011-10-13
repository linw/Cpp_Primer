/*
 * MODULE NAME: 49.cc
 * PROJECT: cpp_primer array
 * AUTHOR: 林炜
 * DATE: October 27, 2011
 * DESCRIPTION:习题 4.9 
*/
#include <iostream>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;

void initIntArray(int* source, const size_t size)
{
    for(size_t index = 0; index != size; ++index){
        source[index] = index;
    }
}

void printIntArray(const int* source, const size_t size)
{
    for(size_t index = 0; index != size; ++index){
        cout<<source[index]<<" ";
    } 
    cout<<endl;   
}

int main()
{
    const size_t array_size = 10;
    int source[array_size];
    initIntArray(source,array_size);
    printIntArray(source,array_size);
    return 0;
}
