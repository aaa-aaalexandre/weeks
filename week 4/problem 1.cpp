#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int jeff;
    long sum = 0;

    cout << "Enter an integer: ";
    cin >> jeff;
    for(int i = 1; i <= jeff; ++i) {
        sum += i;
    }
    cout << "The sum of natural numbers up until" << jeff << " is " << sum;    

    return 0;
}
