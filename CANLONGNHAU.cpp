#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N; cout << "N = "; cin >> N;
    double F = 0;
    for (int i = N; i >=1 ; i--){
        F = sqrt(i+F);
    }
    cout <<"F(n) = "<< F;
}
