#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N; cout << "N = "; cin >> N;
    int x = (-1+sqrt(1+8*N))/2;
    if (N <= 2){
        cout <<"m lon nhat = 0";
    }
    else
        cout << "m lon nhat = " << x;
}
