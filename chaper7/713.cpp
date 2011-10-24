/*
 * MODULE NAME: 713.cpp
 * PROJECT: cpp_primer Function 7.13
 * AUTHOR: 林炜
 * DATE: October 17, 2011
 * DESCRIPTION: 
*/
#include <iostream>
using namespace std;

int array_sum_1(const int *arr, size_t size){
    int sum = 0;
    for(size_t i = 0; i < size; ++i){
        sum += arr[i];        
    }   
    return sum; 
}

int array_sum_2(const int *beg, const int *end){
    int sum = 0;
    for(; beg != end; ++beg)
        sum += *beg;
};

int array_sum_3(const int arr[], size_t size){
    int sum = 0;
    for(size_t i = 0; i < size; ++i)
        sum += arr[i];
};

