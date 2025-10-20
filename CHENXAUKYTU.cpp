#include <iostream>
#include <string>
using namespace std;
int main(){
    string w,s;
    cout <<"Nhap W = ";
    getline(cin,w);
    cout <<"Nhap S = "; 
    getline(cin,s);
    
    int p,q;
    cout <<"P = "; cin >> p;
    cout <<"Q = "; cin >> q;
    if (p > w.length() || q > w.length()){
        return 0;
    }
    if (p > q){
        w.insert(p,s);
        w.insert(q,s);
    }
    else{
        w.insert(q,s);
        w.insert(p,s);
    }
    cout <<"Ket qua: " << w;
}
