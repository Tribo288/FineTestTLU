#include <iostream>
#include <string>
using namespace std;
bool Na_check(char c){
	return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int main(){
	string s = ""; cout << "Nhap xau: "; getline(cin,s);
	cout <<"Xau ket qua: ";
	for (int i = 0; i < s.size()-1; i++){
		cout << s[i];
		if (Na_check(s[i]) && Na_check(s[i+1])) cout << "-";
	}
	cout << s[s.size()-1];
}
