#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout <<"Nhap a = "; int a; cin >> a;
    cout <<"Nhap b = "; int b; cin >> b;
    cout <<"Nhap c = "; int c; cin >> c;
    if (b > c){
        cout << "Y = " <<  0;
    }
    else{
        cout << "Y = " << pow(a,2)+3*a-1;
    }
    
}
