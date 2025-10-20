#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout <<"Nhap x = "; double x; cin >> x;
    if ((x == 3) || (x < 0)){
        cout <<"Bieu thuc khong xac dinh";
    }
    else{
        cout << "Ket qua: " << (1+sqrt(x))/(x-3);
    }
}
