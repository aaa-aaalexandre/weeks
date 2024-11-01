#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "We're inserting three numbers and we'll see which is the biggest out of them. " <<std::endl;
    long long a, b, c;
    
    cout << "Insert the first number: ";
    cin >> a;
    
    cout << "Insert the second number: ";
    cin >> b;
    
    cout << "Insert the third number: ";
    cin >> c;
    

    int maxval = a;
    

    if (b > maxval) {
        maxval = b;
    }
    

    if (c > maxval) {
        maxval = c;
    }
    
    cout << "The biggest number among those three is " << maxval << endl;

    return 0;
}
