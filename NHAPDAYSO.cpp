#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;
    cout << "N = "; cin >> N;
    vector<int> a(N);
    //Nhap Mang 
    for (int i = 0 ; i < N ; i++){
        cout << "a[" <<i <<"] = " ;
        cin >> a[i];
         
    } 
    //dem so am
    int cnt = 0; 
    // In ketqua 
    cout<<"Day A ="; 
    for (int i : a){
      cout << " " << i;
      if (i < 0 ){
          cnt += 1; 
      }  
    } 
    
    cout << endl << "So so am trong A: " << cnt; 
} 
