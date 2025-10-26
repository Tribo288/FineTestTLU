#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    int T; cin >> T;
    vector<double> outlist(T);
    for (int i = 0 ; i < T ; i++){
        int n; cin >> n;
        double s = 0;
        
        for (int i = 0 ; i < n ; i++){
            s = sqrt(2+s);
        }
        
        outlist[i] = s;
    
    }
    for (double i : outlist){
        cout << fixed << setprecision(5) << i << endl;
    }
}
