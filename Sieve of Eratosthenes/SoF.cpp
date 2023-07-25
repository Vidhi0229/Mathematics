#include <bits/stdc++.h>
using namespace std;
bool is_Prime(int n);

int main(){
    int n;
    cout << "Enter Limit: ";
    cin >> n;
    for(int i = 2; i <= n; i++){
        if(is_Prime(i)){
            cout << i << " ";
        }
    }
    cout << "\n";
}

bool is_Prime(int n){
    int d, i = 2;
    if(n < 2){
        return false;
    }
    else{
        while(i < n){
            if(n % i == 0){
                return false;
                break;
            }
            i++;
        }
        return true;
    }
}