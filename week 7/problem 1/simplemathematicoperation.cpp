
#include <iostream>
using namespace std; 
#include <cmath>

int main() {
    // Code
    int a;
    cout << "We are calculating a simple mathematic operation, namely addition or difference. "<<std::endl;
    cout << "Insert 1 to add. "<<std::endl;
    cout << "Insert 2 to subtract "<<std::endl;
    cout << "Insert 3 to multiply. "<<std::endl;
    cout << "Insert 4 to divide. "<<std::endl;
    cin >> a;
    long long x, y;
    
    cout << "Insert the first number: ";
    cin >> x;
    
    cout << "Insert the second number: ";
    cin >> y;
    if (a == 1) {
        cout << "The answer is " << x + y <<std::endl;
    } else if (a == 2) {
        cout << "The answer is " << x - y <<std::endl;
    } else if (a == 3) {
        cout << "The answer is " << x * y <<std::endl;
    } else if (a == 4) {
        cout << "The answer is " << x / y <<std::endl;
    } else {
        cout << "The value you inputted is not recognized. Try again." << std::endl;
    }
    return 0;
}
