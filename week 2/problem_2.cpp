#include <iostream>
#include <cmath>

#include <iostream>
using namespace std;

int main ()
{
  cout << "ax^2+bx+c=0, and we're finding the value of x." <<std::endl;
  int a;
  cout << "Insert value for a: ";
  cin >> a;
  int b;
  cout << "Insert value for b: ";
  cin >> b;
  int c;
  cout << "Insert value for c: ";
  cin >> c;
  cout << "The discrimant has the value of " << b*b-4*a*c <<std::endl;

    int discriminant = b * b - 4 * a * c;

    
    if (discriminant < 0) {
        cout << "The discriminant is negative. There are no real roots for x, as they will be complex." << std::endl;
    } else if (discriminant > 0) {
        cout << "The discriminant is positive." << endl;
        double sqrt_discriminant = std::sqrt(discriminant);
        double root1 = (-b + sqrt_discriminant) / (2 * a);
        double root2 = (-b - sqrt_discriminant) / (2 * a);
        cout << "The first root is " << root1 << " and the second root is " << root2 << endl;
    } else {
        cout << "The discriminant is zero." << std::endl;
        int resultifitiszero = (b*-1)/(2*a);
        cout << "Therefore, x's value is " << resultifitiszero <<std::endl;
    }
  return 0;
