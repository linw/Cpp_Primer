/*
 * MODULE NAME: 714.cpp
 * PROJECT: cpp_primer Function 7.14
 * AUTHOR: 林炜
 * DATE: October 17, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <vector>
using namespace std;

double cal_sum_vector(vector<double> &v){
    double sum = 0;
    for(vector<double>::iterator iter = v.begin(); iter != v.end(); ++iter){
        sum += *iter;
    }
    return sum;
}

int main()
{
    vector<double> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9.154545648);
    v.push_back(10);
    cout<<cal_sum_vector(v)<<endl;
    return 0;
}
