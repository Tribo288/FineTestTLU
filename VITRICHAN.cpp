#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;
    cout <<"N = "; cin >> N;
    vector<double> lst(N);
    //Nhap mang
    for (int i = 0 ; i < N ; i++){
        cout <<"A[" <<i<<"] = ";
        cin >> lst[i];
    }
    //xu li + in kq
    cout<<"Cac phan tu o vi tri chan:";
    for (int i = 0 ; i < N ; i++){
        if( i % 2 == 0){
            cout << " " << lst[i];
        }
    }
}
