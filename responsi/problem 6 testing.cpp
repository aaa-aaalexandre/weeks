using namespace std;
#include <cmath>
#include <iostream>
int main() {
  int n;
  long fact = 1.0;
  cout << "Enter a number" << endl;
  cin >> n;
  for(int i = 1; i <= n; ++i) {
       fact *= i;
  }
  cout << "The factorial of the number you just submitted is " << fact << "!" << endl;

  return 0;
}
