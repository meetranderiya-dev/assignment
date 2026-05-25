#include<iostream>
using namespace std;
class account{
    protected:
    char accno[20];
    char accHoldoer[20];
    char email[20]
    float balance;
    public; void getinfo(){
        cout<<"\n accno acchholder email init bal:";
        cin>>accno>>accholder>>email>>balance;
    }
    void checkbal(){
        cout<<"\n current bal:"<<balance; 
    }
};
class current : public account{
    public:
    void addintrest(){
        balance +=(balance*0.01);
    }
};
class current : public account{
    public:
    void debitamount(){
        public:
        void debit amount(){
            balance -=(balance*0.01);
        }
    };
    main(){
        cout<<"\n press 1 for saving account";
        cout<<"\n press 2 for current account";
        int ch;
        cin>>ch;
        cin>>ch;
        if(ch==1){
            saving s1;
            s1.getinfo();
            s1.addintrest();
            s1.checkbal();
        }
        else if(ch==2){
            current c1;
            c1.getinfo();
            c1 debitamount();
            c1.checkbal();
        }
        else{
            cout<<"\n invlid choice";
        }
}