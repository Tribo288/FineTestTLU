#include <iostream>
using namespace std;

int sal(int t){
	if (t <= 40) return t*15000;
	else return 40*15000 + (t-40)*15000*1.5;
}
int main(){
	int t;
	do{
		cout <<"Nhap so gio lam: "; cin >> t;
	}while( t < 10 || t > 65);
	cout << "So luong ban nhan duoc: " << sal(t);
	cout << endl;
}
