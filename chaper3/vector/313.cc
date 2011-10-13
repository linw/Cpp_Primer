/*
 * MODULE NAME: 313.cc
 * PROJECT: cpp_primer vector
 * AUTHOR: 林炜
 * DATE: October 22, 2011
 * DESCRIPTION:习题 3.13 
*/
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

/*
 *用于从标准输入读取整数存于vector中
*/
vector<int> readNum()
{
    vector<int> data;
    int k = 1;
    while(cin>>k){
        // cout<<k<<endl;
        if(k == -1) break;
        data.push_back(k);
        cout<<data[data.size()-1]<<endl;;
    }
    return data;
};

void calNum(vector<int>& data)
{
    bool flag = false;
    if(data.size()%2 == 0) flag = true;
    cout<<"data size:"<<data.size()<<endl;
    cout<<"data[0]:"<<data[0]<<endl;

    for(vector<int>::size_type i = 0; i< (flag?data.size():data.size()-1)/2; i++){
        cout<<"id:"<<i<<","<<(flag?data.size():data.size()-1)-i<<endl;
        cout<<"num:"<<data[i]<<","<<data[(flag?data.size():data.size()-1)-i]<<endl;
        cout<<data[i]+data[(flag?data.size():data.size()-1)-i-1]<<endl;
    }
};

int main()
{
    vector<int> m = readNum();
    calNum(m);
    // int k = true?100:200;
    // cout<<k<<endl;
    for(vector<int>::size_type i = 0; i<m.size(); ++i){
        cout<<m[i]<<endl;
    }
}
