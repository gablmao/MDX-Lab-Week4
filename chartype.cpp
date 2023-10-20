#include <iostream>

using namespace std;

int main(){

    cout << "Enter a character type: ";
    cin >> x;

    bool isDigit = isDigit(x);


    switch (x):
     case a:
     case e:
     case i:
     case o:
     case u:
     cout << x << " is a vowel";
     break;

     case !:
     cout << x << " is punctuation";
     break;

     case isDigit:
     cout << x << " is a digit";
     break;

     default:
     cout << x << " is unrecognised"

    return 0;
}