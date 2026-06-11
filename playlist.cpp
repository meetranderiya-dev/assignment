#include<iostream>
using namespace std;
class playlist {
	public:
	string name;
	string createdOn;
	bool ispublic;
};
int main(){
	playlist p1;
	p1.name = "my playlist";
	p1.createdOn = "11-6-2026";
	p1.ispublic = true;
	cout <<"name:" << p1.name <<endl;
	cout <<"created On:" << p1.createdOn <<endl;
	cout <<"public:" <<p1.ispublic <<endl;
	return 0;
}