/*
 * MODULE NAME: learn.cpp
 * PROJECT: cpp_primer Function 7.5 7.6
 * AUTHOR: 林炜
 * DATE: October 14, 2011
 * DESCRIPTION: 
*/
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <stdio.h>

using namespace std;

class test 
{ 
public: 
    test(int i){ m_i=i;} 
    test(){}
    
    
    void hello() 
    { 
        printf("hello\n"); 
        this->m_i = 0;
        cout<<(this->m_i)<<endl;
        printf("%p\n",this);
    }

    void helloo()
    {
        printf("helloo\n"); 
        this->m_i = 0;
        cout<<(this->m_i)<<endl;
        printf("%p\n",this);      
    }

    void hellooo()
    {
        printf("hellooo\n"); 
        this->m_i = 0;
        cout<<(this->m_i)<<endl;
        printf("%p\n",this);      
    }    
    
private: 
    int m_i; 
};


typedef void (test::*HELLO_FUNC)();
void print(string s){
    cout<<s<<endl;  
};


int main() 
{ 
/*    test *p=new test(); 
    test q;
    p->hello(); 
    HELLO_FUNC phello_fun=&test::hello;
    printf("%p\n",phello_fun);
    p=NULL; 
    phello_fun = &test::hello;
    printf("%p\n",phello_fun);
    phello_fun = p->hello;
    printf("%p\n",phello_fun);
    phello_fun=q.hello;
    printf("%p\n",phello_fun);
    p->hello(); 
    // test::hello();
  */
/*
    test q;
    test p;
    void *point = (void*)&test::hello;
    printf("%p\n",&test::hello);
    // printf("%p\n",&test::helloo);
    // printf("%p\n",&test::hellooo);
    printf("%p\n",point);
    q.hello();
    q.helloo();
*/
    // void print(int);
    print("linwei");
    return 0;
}
