#include<iostream>
using namespace std;
class rect{
       float length,width;
	public:
		void getdata(){
	cout<<"length :";
	cin>>length;
	cout<<"width :";
	cin>>width;
}
void calculateArea(){
	float area;
	area=length*width;
	cout<<"rect :"<<area<<endl;
}
};
int main(){
	rect r;
	r.getdata();
	r.calculateArea();  
}

