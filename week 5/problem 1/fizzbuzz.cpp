#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> results; // Vector to store the results

    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            results.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            results.push_back("Fizz");
        } else if (i % 5 == 0) {
            results.push_back("Buzz");
        } else {
            results.push_back(to_string(i));
        }
    }

    // Print the results stored in the vector
    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}
