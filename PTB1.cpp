#include <iostream>
using namespace std;
int main(){
    float a,b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    if (a == 0){
        if (b == 0){
            cout << "Vo So Nghiem";
        }
        else{
            cout <<"Vo Nghiem";
            
        }
    }
    else{
        cout << "Nghiem La: " << -b/a;
    }
}
