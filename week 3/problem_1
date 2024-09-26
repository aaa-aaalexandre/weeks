#include <iostream>
#include <cmath>

#include <iostream>
using namespace std;

int main ()
{
  cout << "ax^2+bx+c=0, and we're finding the value of x." <<std::endl;
    long long a, b, c;
    
    cout << "Insert the first number: ";
    cin >> a;
    
    cout << "Insert the second number: ";
    cin >> b;
    
    cout << "Insert the third number: ";
    cin >> c;
  cout << "The discrimant has the value of " << b*b-4*a*c <<std::endl;

    int discriminant = b * b - 4 * a * c;

    
    if (discriminant < 0) {
        cout << "The discriminant is negative. There are no real roots for x, as they (roots x1 and x2) will be imaginary." << std::endl;
    } else if (discriminant > 0) {
        cout << "The discriminant is positive. Roots x1 and x2 are real and distinct" << endl;
        double sqrt_discriminant = std::sqrt(discriminant);
        double root1 = (-b + sqrt_discriminant) / (2 * a);
        double root2 = (-b - sqrt_discriminant) / (2 * a);
        cout << "The first root is " << root1 << " and the second root is " << root2 << endl;
    } else {
        cout << "The discriminant is zero. Roots x1 and x2 are real and equal." << std::endl;
        int resultifitiszero = (b*-1)/(2*a);
        cout << "Therefore, x's value is " << resultifitiszero <<std::endl;
    }
  return 0;
}
