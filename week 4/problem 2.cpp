#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int jeff;

    cout << "Enter a number: ";
    cin >> jeff;
    for(int i = 1; i <= 10; i++) {
        cout << "The number multiplied by " << i << " is " << jeff * i<<std::endl; ;
    }

    return 0;
}
