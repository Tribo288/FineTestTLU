#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    //Nhap xau
    string s;
    cout << "Nhap W = ";
    getline(cin,s);
    
    //tao mang
    vector<char> out;
    
    //Xu ly
    for (char i : s){
        if ( !isdigit(i) ){
            out.push_back(i);
        }
    }
        
    //In dau ra
    cout << "W sau khi xoa cac chu so = ";
    for (char i : out){
         cout << i;
    }
} 
