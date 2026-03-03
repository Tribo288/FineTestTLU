#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int n;
	do{
		cout <<"So phan tu n = "; cin >> n;
	}while(n <= 5 || n >= 20);
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "Phan tu: "; cin >> arr[i];
	}
	cout << endl;
	cout <<"Day so:";
	//
	int scp = 0; int max = -1e9; int scpmax = -1e9;
	for(int i = 0; i < n; i++){
		cout << " " << arr[i];
		if(arr[i] > max) max = arr[i];
		//scp
		if (pow(int(sqrt(arr[i])),2) ==  arr[i]){
			scp = 1;
			if (arr[i] > scpmax) scpmax = arr[i];
		} 
	}
	//
	cout << endl << endl;
	cout << "So max = " << max <<endl;;;
	if (scp == 0) cout <<"Day khong co so chinh phuong";
	else cout << "So chinh phuong lon nhat: " << max;
}
