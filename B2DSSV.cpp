#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	do{
		cout << "N = "; cin >> n;
	}while(n<=0 || n>= 100);
	cin.ignore();
	vector<string> arr(n);
	for(int i = 0; i < n; i++){
		cout << "Ho ten " << i+1 << ": ";getline(cin,arr[i]);
	}
	//tim min;
	int Min = 1e2; int pos = -1;
	for(int i = 0  ; i < n; i++){
		if (arr[i].size() < Min){
			Min = arr[i].size();
			pos = i;
		}
	}
	//
	cout <<"Ho ten ngan nhat (dau tien) la: ";
	cout << arr[pos];
}
