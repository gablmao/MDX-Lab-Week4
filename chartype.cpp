#include <iostream>

using namespace std;

int main(){

    cout << "Enter a character type: ";
    char x;
    cin >> x;

   if (isdigit(x)) {
    cout << "It's a digit";
   } else if (x == '!') {
        cout << "It's a punctuation";
   } else if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
        cout << "It's a vowel";
   } else {
    cout << "Unrecognised";
   }

   return 0;
}