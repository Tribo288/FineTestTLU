#include <iostream>
#include <string>
using namespace std;
bool Vh_check(char c){
	char s = toupper(c);
	return (s == c);
}
int main(){
	string s = ""; cout << "Nhap xau: "; getline(cin,s);
	cout <<"Xau ket qua: ";
	for (int i = 0; i < s.size()-1; i++){
		cout << s[i];
		if (!Vh_check(s[i]) && Vh_check(s[i+1])) cout << " ";
	}
	cout << s[s.size()-1];
}
