#include <iostream>
using namespace std;
int main(){
    while (true){    
        cout << "[1] Buoi sang" << endl;
        cout << "[2] Buoi trua"<< endl;
        cout << "[3] Buoi chieu"<< endl;
        cout << "[4] Buoi toi"<< endl;
        cout << "[5] Ket thuc"<< endl;
        cout << "Chon chuc nang: ";
        int a; cin >> a;
        if (a == 1){
            cout << "Chao buoi sang" << endl;
        }
        else if ( a == 2){
            cout << "Den gio nghi trua roi, di an thoi" << endl;
        }
        else if ( a == 3){
            cout << "Het gio lam viec, ve nha nao" << endl;            
        }
        else if ( a == 4){
            cout << "Chuan bi ngu buoi toi" << endl;
        }
        else if ( a == 5){
            cout << "Chuc ngu ngon";
            break;
        }
        else{ 
            continue;
        }
    }
    cout << endl;
    return 0;
}

