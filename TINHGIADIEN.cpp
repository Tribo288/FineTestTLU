#include <iostream>
using namespace std;
int main(){
    cout <<"N = "; int n; cin >> n;
    long long final_price = 0;
    int bac1 = 1484;
    int bac2 = 1533;
    int bac3 = 1786;
    int bac4 = 2242;
    int bac5 = 2503;
    int bac6 = 2587;
    //bac1 
    if (n <= 50 ) {
        final_price = n*bac1 ;
    }
    //bac2 
    else if ((n > 50 ) && (n <= 100 )){
        final_price = 50*bac1 + (n-50)*bac2;
    }
    //bac3
    else if ((n > 100) && (n <= 200)){
        final_price = 50*bac1 + 50*bac2 + (n-100)*bac3;    
    }
    //bac4
    else if ((n > 200)&&( n <=300)){
        final_price = 50*bac1 + 50*bac2 + 100*bac3 + (n-200)*bac4;
    } 
    //bac5
    else if ((n > 300) && ( n <= 400)){
        final_price = 50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + (n-300)*bac5;
    }
    //bac6
    else{
        final_price = 50*bac1 + 50*bac2 + 100*bac3 + 100*bac4 + 100*bac5 + (n-400)*bac6;
    }
    
    //in KQ
    cout << "So tien phai nop: " << final_price;
}
