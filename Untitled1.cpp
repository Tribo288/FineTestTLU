#include <bits/stdc++.h>
using namespace std;
bool check_hoa(char c){
	char s = toupper(c);
	if (s == c) return true;
	return false;
}

int main(){
	string s; cout << "Nhap xau: ";getline(cin,s);
	for (int i = 0; i < s.size()-1; i++){
		cout << s[i];
		if (!check_hoa(s[i]) && check_hoa(s[i+1])) cout << ' ';
		if (i == s.size()-2) cout << s[s.size()-1];
	}
} 
