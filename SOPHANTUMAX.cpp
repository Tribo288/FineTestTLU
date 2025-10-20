#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cout << "N = "; cin >> n;
    vector<int> a(n);
    for (int i = 0 ; i < n ; i ++){
        cout <<"a[" <<i<<"] = ";
        cin >> a[i];
    }
    //tim max
    int max =-1e9;
    for (int i : a){
        if ( i > max){
            max = i;
        }
    }
    //dem so phan tu bang max
    int cnt = 0;
    for (int i : a){
        if (i == max){
            cnt += 1;
        }
    }
    //in kq
    cout <<"Gia tri lon nhat cua A: " << max << endl;
    cout <<"So phan tu co gia tri lon nhat: " << cnt <<endl;
}
