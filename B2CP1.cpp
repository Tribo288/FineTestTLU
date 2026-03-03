#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	do{
		cout <<"Nhap n = "; cin >> n;
	}while(n < 5 || n > 20);
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "So thu "<< i+1 <<": "; cin >> arr[i];
	}
	cout << endl;
	cout <<"Hien thi day so:";
	for(int i = 0; i < n; i++) cout << " " << arr[i];
	cout << endl;
	//
	int scp = 0, scpc = 0;
	for(int i = 0; i < n; i++){
		if (int(sqrt(arr[i]))==sqrt(arr[i])){
			scp++;
			if (arr[i]%2 == 0) scpc++;
		} 
	}
	//
	cout << endl;
	cout <<"Day co "<<scp << " so chinh phuong, trong do co " << scpc <<" so chinh phuong chan!";
}
