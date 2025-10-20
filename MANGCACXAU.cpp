#include <iostream>
#include <vector>
#include <string>
using namespace std;
int len_no_space(string s){
    int count = 0;
    for (char i : s){
        if (i != ' '){
            count++; 
        } 
    } 
    return count; 
} 


int main(){
    //dau vao
    long long N; cout <<"N = "; cin >> N;
    vector<string> lst(N);
    cin.ignore(); 
    //Nhap tung xau
    for (long long i = 0 ; i < N ; i++){
        cout <<"Ten ngon ngu lap trinh thu " << i+1 <<": ";
        getline(cin,lst[i]);
    }
    // xu li tim chi so va xau ngan nhat
    long long min_length = 1e9;;
    long long min_length_index = -1; 
    for (long long i = 0; i < N ; i++){
        int find_min = len_no_space(lst[i]);
        if (find_min == 0){
            continue; 
        } 
        if (find_min <= min_length){
            min_length = find_min;
            min_length_index = i; 
        }
    }
    if (min_length_index == -1) {
        cout << "";
    }
    else{
    cout <<"Ngon ngu ngan nhat cuoi cung la: " << lst[min_length_index] << endl;
    }
}


