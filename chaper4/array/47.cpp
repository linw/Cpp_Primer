/*
 * MODULE NAME: 47.cpp
 * PROJECT: cpp_primer array
 * AUTHOR: 林炜
 * DATE: October 27, 2011
 * DESCRIPTION:习题 4.7 
*/
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void arrayCopy(const int* source, int* target, const size_t size)
{
    for(size_t index = 0; index != size; ++index){
        target[index] = source[index];
    }
}

void vectorCopy(const vector<int>& source, vector<int>& target)
{
    for(size_t index = 0; index != source.size(); ++index){
        target.push_back(source[index]);
    }
}
void printIntArray(const int* source, const size_t size)
{
    for(size_t index = 0; index != size; ++index){
        cout<<source[index]<<" ";
    } 
    cout<<endl;   
}

void printIntVector(vector<int>& source)
{
    for(vector<int>::iterator iter = source.begin(); iter != source.end(); ++iter){
        cout<<*iter<<" ";
    }
    cout<<endl;   
}

int main()
{
    ////////////////int array///////////////////////
    const size_t int_size = 10;
    int int_source[int_size] = {0,1,1,2,3,5,8,13,21,34};
    int int_target[int_size];
    printIntArray(int_target, int_size);
    arrayCopy(int_source, int_target, int_size);
    printIntArray(int_target, int_size);

    ////////////////vector//////////////////////////
    vector<int> vector_source;
    vector<int> vector_target;
    vector_source.push_back(0);
    vector_source.push_back(1);
    vector_source.push_back(1);
    vector_source.push_back(2);
    vector_source.push_back(3);
    vector_source.push_back(5);
    vector_source.push_back(8);
    vector_source.push_back(13);
    vector_source.push_back(21);
    vector_source.push_back(34);

    printIntVector(vector_target);
    vectorCopy(vector_source, vector_target);
    printIntVector(vector_target);
    return 0;

}
