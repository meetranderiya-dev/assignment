#include<iostream>
using namespace std;
class foodOrder{
public:
	string orderId;
	string restaurantname;
	bool isdelivered;
	void markdelivered();
	
};
int main(){
	foodOrder p1;
	p1.orderId =("my orderId");
	p1.restaurantname ="restaurantname";
	p1.isdelivered ="true";
	cout<<"orderId:"<<101<<endl;
	cout<<"restaurantname:"<<"iceVEDA"<<endl;
	cout<<"isdelivered:"<<"order delivered successfully"<<endl;
	return 0;
}
	