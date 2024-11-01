#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int jeff;
    long sum = 0;

    cout << "Enter an integer: ";
    cin >> jeff;
    for(int i = 1; i <= 10; i++) {
        cout << "The number multiplied by " << i << " is " << jeff * i<<std::endl; ;
    }

    return 0;
}
