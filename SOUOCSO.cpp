#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout <<"N = "; int n; cin >> n;
    int cnt = 0;
    for (int i = 1; i <= sqrt(n) ; i++){
        if (n % i == 0){
            cnt += 1;
            if (i != n/i){
                cnt += 1;
            } 
        }
    }
    cout <<"So " << n <<" co " << cnt << " uoc so.";
} 
