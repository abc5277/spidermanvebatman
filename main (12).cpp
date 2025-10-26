#include <iostream>
#include <string>
using namespace std;
class SuperKahraman {
public:
	string ad;
	int can;
	int hasar;
	void ozelGuc() {
		hasar =10;
	}
	SuperKahraman() {
		hasar =50;
		can =100;
	}
};

int main()
{
	SuperKahraman spiderMan;
	spiderMan.ad="spider Man";

	SuperKahraman batMan;
	batMan.ad="batMan";

	cout<<"Super kahramanlar kapisiyor"<<endl;
	bool savasBittiMi=true;

	while(savasBittiMi) {
		char karakterSecimi;
		cout<<"hangi Super Kahraman saldD1sD1n. s/b"<<endl;
		cin>>karakterSecimi;
		if (karakterSecimi=='s') {
			batMan.can-=spiderMan.hasar;
		}
		else if (karakterSecimi == 'b') {
			spiderMan.can-=batMan.hasar;
		}
		else {
			cout<<"hatali secim"<<endl;
		}
		cout<<"spiderMan kalan canD1:"<<spiderMan.can<<"batMan kalan can:"<<batMan.can<<endl;
		if (spiderMan.can<=0 || batMan.can<=0) {
			savasBittiMi=false;
			if (spiderMan.can<0) {
				cout<<"kazanan batMan"<<endl;
			}
			else {
				cout<<"kazanan spiderMan"<<endl;
			}
		}
	}
	return 0;
}