#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, W;
    cout << "Nhap xau S: ";
    getline(cin, S);
    cout << "Nhap xau W: ";
    getline(cin, W);

    // t�m v? tr� xu?t hi?n d?u ti�n c?a W trong S
    int pos = S.find(W);

    if (pos != string::npos) {
        cout << "W xuat hien trong S o vi tri " << pos;
    } 
    else {
        cout << "W khong xuat hien trong S";
    }
    cout << endl;
}
