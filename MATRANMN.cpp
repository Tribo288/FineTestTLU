#include <iostream>
using namespace std;
int main(){
    cout << "M = ";long long m; cin >>m;
    cout << "N = ";long long n; cin >>n;
    for (long long i = 0 ; i < m ; i++){
        for (long long j = 0 ; j < n ; j++){
            cout << 0;
            if ( (n > 1) && (j != n - 1) ){
                cout << " ";
            }
        }
        cout << endl;
    }
}

