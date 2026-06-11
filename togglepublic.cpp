#include<iostream>
using namespace std;
class playlist {
	public:
	string name;
	string createdOn;
	bool ispublic;
	//function to toggle ispublic
	void togglepublic(){
		ispublic =! ispublic;
	}
};
int main(){
	playlist p1;
	p1.name = "my playlist";
	p1.createdOn = "11-6-2026";
	p1.ispublic = true;
	cout <<"initial value:"<<p1.ispublic<<endl;
	//toggle first time
	p1.togglepublic();
	cout << "after first toggle:"<<p1.ispublic<<endl;
	//toggle second time
	cout <<"after second toggle:"<<p1.ispublic<<endl;
		return 0;
}