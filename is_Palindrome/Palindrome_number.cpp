#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string num);

int main(){
    int number, l, i = 0;
    cout << "Enter Number: ";
    cin >> number;
    string num = to_string(number);
    if (isPalindrome(num)) {
        cout << number << " is a palindrome." << std::endl;
    } else {
        cout << number << " is not a palindrome." << std::endl;
    }
}

bool isPalindrome(string num){
    string copy_string = num;
    reverse(copy_string.begin(), copy_string.end());
    return copy_string == num;
}