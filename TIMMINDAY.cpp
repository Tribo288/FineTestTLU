#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N; cout <<"N = ";cin >> N;
    vector<double> lst(N);
    double min = 1e9;
    for (int i = 0; i < N ; i++){
        cout <<"a[" << i << "] = ";
        cin >> lst[i];
    }
    //tim min
    for (double i : lst){
        if ( i < min ){
            min = i;
        }
    }
    //in kq
    cout <<"Gia tri nho nhat trong A: " << min;
}
