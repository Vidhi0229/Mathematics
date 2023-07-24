#include <bits/stdc++.h>
using namespace std;
int LCM(int n1, int n2);

int main(){
    int n1, n2;
    cout << "Enter two number: ";
    cin >> n1 >> n2;
    cout << "LCM: "<< LCM(n1, n2)<< "\n";
}

int LCM(int n1, int n2){
    int GCD = __gcd(n1, n2);
    return (n1 * n2) / GCD;
}