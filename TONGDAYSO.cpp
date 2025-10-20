#include <iostream>
using namespace std;
int main(){
    int N;cout << "N = "; cin >> N;
    int A = 0;
    for (int i = 2 ; i <= N ; i ++){
        A += (i-1)*i*(i+1);
    }
    cout << "A = " << A << endl;
    
}
