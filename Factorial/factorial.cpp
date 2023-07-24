#include <bits/stdc++.h>
using namespace std;
void factorial(int num);

int main(){
    int number, l, i = 0;
    cout << "Enter Number: ";
    cin >> number;
    factorial(number);
}

void factorial(int num){
    int f = 0, fa = 1;
    if(num == 1 || num == 0){
        fa = 1; 
    }
    else{
        f = num;
        while(f > 1){
            fa = fa * f;
            f--;
        }
    }

    cout << "Factorial: "<< fa << "\n";
}