/*
 * MODULE NAME: 48.cpp
 * PROJECT: cpp_primer array
 * AUTHOR: 林炜
 * DATE: October 27, 2011
 * DESCRIPTION:习题 4.8
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

bool equalArray(const int* source, const int* target, const size_t size)
{
    bool flag = true;
    for(size_t index = 0; index != size; ++index){
        if(source[index] != target[index]){
            flag = false;
            break;
        }
    }
    return flag;
}

bool equalVector(const vector<int>& source, const vector<int>& target)
{
    bool flag = true;
    if(source.size() != target.size()){
        flag = false;
    }
    else {
        for(vector<int>::size_type index = 0; index != source.size(); ++index){
            if(source[index] != target[index]){
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    int a1[10] = {0,1,1,2,3,5,8,13,21,34};
    int a2[10] = {0,1,1,2,3,5,8,13,21,32};
    if(equalArray(a1,a2,10)) cout<<"int equal"<<endl;
    else cout<<"int not equal"<<endl;

    vector<int> v1;
    vector<int> v2;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(8);
    v1.push_back(13);
    v1.push_back(21);
    v1.push_back(34);
    vectorCopy(v1, v2);
    v1.push_back(1);
    if(equalVector(v1,v2)) cout<<"vector equal"<<endl;
    else cout<<"vector not equal"<<endl;

    return 0;


}