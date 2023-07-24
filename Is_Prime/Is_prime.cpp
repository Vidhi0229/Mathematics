#include <bits/stdc++.h>
using namespace std;
bool is_Prime(int n);

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if (is_Prime(n)){
        cout << n << " is a prime number\n";
    }
    else{
        cout << n << " is not a prime number\n";
    }
}

bool is_Prime(int n){
    int d, i = 2;
    if(n < 2){
        return false;
    }
    else if(n == 2){
        return true;
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