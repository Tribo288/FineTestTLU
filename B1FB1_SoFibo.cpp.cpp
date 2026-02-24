#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
	if (n == 0) return 0;
	else if (n == 1) return 1;
	int fib0, fib1, fib2;
	fib0 = 0;
	fib1 = 1;
	fib2 = fib0 + fib1;
	for (int i = 3; i<= n;i++){
		fib0 = fib1;
		fib1 = fib2;
		fib2 = fib0+fib1;
	}
	return fib2;
}
int main(){
	int n; 
	while (true){
		cout << "Cho so nguyen n = "; cin >> n;
		if (n <0) cout << "Nhap sai! So n phai khong am." << endl;
		else cout << "So Fibonacci thu "<< n <<" la: "<< fibo(n) << endl;
		cout << "Ban co muon tim tiep khong?(C/c: Tim tiep) "; char c; cin >> c;
		if (c == 'k') return 0;
		else continue;
	}
}
