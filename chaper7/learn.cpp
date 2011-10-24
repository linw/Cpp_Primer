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

int fun75(int a, int *p){
    return a > *p ? a : *p;
};

void fun76(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}

int test(int *&a){
    cout<<*a<<endl;
    return 1;
}

int test1(int (&arr)[10]){
    return 0;
    
};

const string &fun(const string &s){
    string s1 = s;
    cout<<s1<<endl;
    return s;
};
string &processText(string &text){
    return text;
}






class Sales_item {
public:
    std::string getISBN(){
        return isbn;
    };
    void setISBN(std::string s){
        isbn = s;
    };
    double avg_price() const{
        return revenue;
    };
    bool same_isbn(const Sales_item &rhs) const{
        return isbn == rhs.isbn;
    };

private:
    std::string isbn;
    unsigned units_sold;
    double revenue;
};


void king(const int &a){cout<<"king_int"<<endl;}
// void king(const int &a){cout<<"king_const"<<endl;}


typedef void (*funp)(const int &);

int main(/*int argc, char *argv[]*/)
{
/*
int a,b;
a = 10;
b = 11;
cout<<fun75(a, &b)<<endl;
fun76(a, b);
cout<<a<<b<<endl;
int *p = &a;
test(p);
int king[10] = {1,2,3,4,5,6,7,8,9,0};
test1(king);

  int (*matrix)[10];
  matrix = &king;
  cout<<"The size"<<sizeof(*matrix)<<endl;
  for(int i = 0; i < 10; i++){
  cout<<(*matrix)[i]<<endl;
  cout<<matrix[i]<<endl;
  }
    */
    /*
    for(int i = 0; i < argc; ++i){
    cout<<argv[i]<<endl;
    }
    string s = "hello";
    cout<<sizeof(s)<<endl;
    const string &p = fun(s);
    cout<<&s<<endl;
    cout<<&p<<endl;
    cout<<p<<endl;
    */
/*
    string s = "linwei";
    try{
        cout<<processText(s)<<endl;
    }catch(const runtime_error &err){
        cerr<<err.what()<<endl;
    }
    main();
*/
/*
    Sales_item a;
    Sales_item b;
    a.setISBN("linwei");
    b.setISBN("linwei");
    if(a.same_isbn(b))
        cout<<"yes"<<endl;
    else cout<<"no"<<endl;
*/   
    int a = 10;
    king(4.5);
    funp pf1 = 0;
    funp pf2 = king;
    pf2(0);
    printf("%p",pf2);
    // king(a);
    return 0;
}
