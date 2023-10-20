#include <iostream>

using namespace std;

int main() {

    int x;
    int y;
    int z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    if (x < y && y < z)
        cout << "They are in order." << endl;
    else
        cout << "They are not in order" << endl;

    return 0;
}