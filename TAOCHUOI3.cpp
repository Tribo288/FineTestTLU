#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string w ; cout <<"Nhap W = "; cin >> w;
    string w_3;
    //tao chuoi nhan 3 
    for (int i =0 ; i < 3 ; i++ ){
        w_3 += w; 
    } 
    //chen chuoi vao mang
    vector<char> s;
    for (char i : w_3){
        s.push_back(i);
    }
    //in kq;
    cout << "Cac xau con la: " << endl;
    for (int i = 0; i < s.size(); i+=3 ){
        for (int j = i ; j < i+3 ; j++){
            cout << s[j]; 
        } 
        cout << endl;
    } 
}
