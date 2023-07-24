#include <bits/stdc++.h>
using namespace std;
void GCD(int n1, int n2);

int main(){
    int n1, n2;
    cout << "Enter two number: ";
    cin >> n1 >> n2;
    GCD(n1, n2);
    
}

void GCD(int n1, int n2){
    int len = min(n1, n2), m = -1;
    for(int i = 1; i <= len; i++){
        if(n1 % i == 0 && n2 % i == 0){
            m = max(m, i);
        }
    }
    cout << "Greatest common divisor: " << m <<"\n";
}