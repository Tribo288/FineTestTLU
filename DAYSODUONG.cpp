#include <iostream>
using namespace std;
int main(){
    int cnt = 0;
    while (true){
        cout <<"Hay nhap mot so duong: "; int x; cin >> x;
        if (x > 0){
            cnt += 1;
        }
        else{
            break;
        }
    }
    cout <<"Ban da nhap " << cnt <<" so nguyen duong!";
}
