#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! That is not a positive integer! Try again.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "The factorial of " << n << " is " << factorial;    
    }

    return 0;
}
