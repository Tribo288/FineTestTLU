#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main(){
    string s;
    cout << "Nhap W = ";
    getline(cin,s);
    
    vector<string> words; //mang chua cac tu
    stringstream ss(s);  //tach tu bang dau cach
    string word;
    
    while (ss >> word){
        words.push_back(word);
    }
    
    //in kq
    cout <<"Chuan hoa = ";
    for (int i = 0 ; i < words.size() ; i++){
        cout << words[i];
        if (i < words.size()-1){
            cout << " ";
        }
    }
}
