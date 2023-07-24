#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    string num;
    cout << "Enter number: ";
    cin >> number;

    num = to_string(number);
    cout << "Number of digits: "<< num.length() <<"\n";
}