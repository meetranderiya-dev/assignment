#include<iostream>
using namespace std;
class a{
    public:
    int a;
    void gets(){
        cout<<"\nenter a";
        cin>>a;
    }
};
class b {
    public :
    int b;
    void getB(){
        cout<<"\n enter b";
        cin>>b;
    }
};
child inharit parent
class c: public B,public a{
    public:
    void getc(){
        cout<<"\n enter c";
        cin>>c;
    }
    void add(){
        cout<<"\n add="<<a+b+c;
    }
};
main(){
    c c1;
    c1. getA();
    c1.getB();
    c1.getC();
    c1.add();
    
}

