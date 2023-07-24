#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, len, m = -1;
    cout << "Enter two number: ";
    cin >> n1 >> n2;
    len = min(n1, n2);
    for(int i = 1; i <= len; i++){
        if(n1 % i == 0 && n2 % i == 0){
            m = max(m, i);
        }
    }

    cout << m <<"\n";
}