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
	p1.orderId ="my orderId";
	p1.restaurantname ="radhakrishna";
	p1.isdelivered ="true";
	cout<<"order delivered successfully"<<endl;
	//function call
	return 0;
}