/*
 * MODULE NAME: 616.cpp
 * PROJECT: cpp_primer point
 * AUTHOR: 林炜
 * DATE: October 13, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool prefix(vector<int> &a, vector<int> &b){//判断两个中是否一个是另一个的前缀
    size_t max_size;
    max_size = a.size()>b.size()? b.size():a.size();
    bool flag = true;
    for(int i = 0; i != max_size; ++i){
        if(a[i] == b[i]) continue;
        else {
            flag = false;
            break;
        }
    }
    return flag;    
};

int main()
{
    vector<int> a;
    vector<int> b;
    a.push_back(0);
    a.push_back(1);
    a.push_back(1);
    a.push_back(2);

    b.push_back(0);
    b.push_back(1);
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    if(prefix(a,b))
        cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}
