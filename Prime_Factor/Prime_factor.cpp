#include <bits/stdc++.h>
using namespace std;
bool is_Prime(int n);
vector<int> Prime_factor(int n);

int main(){
    int n;
    vector <int> r;
    cout << "Enter Number: ";
    cin >> n;
    r = Prime_factor(n);
    cout << "Prime factor: ";
    for(int num : r){
        cout <<num<<" ";
    }
    cout <<"\n";
}

vector<int> Prime_factor(int n){
    int i = 2;
    vector<int> a;
    while(i < (n+1)){
        if(n % i == 0){
            if(is_Prime(i)){
                a.push_back(i);
            }
        }
        i++; 
    }
    return a;
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