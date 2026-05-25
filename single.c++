#include<iostream>
using namespace std;
//child class:publec parent class
class category{
    public:
    int catid;
    char catname[20];
    void getcategory(){
        cout<<\n"enter category id and name";
        cin>>catid>>catname;
    }
};
class prouct : public category{
    public:
    int pid;
    char pname[20];
    float price;
    void gategory(){
        getegory();
        cout<<"\nenter product id,name and price";
        cin>>pid>>pname>>price;
    }
    void printproduct(){
        cout<<"\ncategory name:"<<catname;
        cout<<"\nproduct name="<<pname;
        cout<<"\nprice="<<price;
    }
};
main(){
    product p1;
    p1.getproduct();
    p1.printproduct();
}