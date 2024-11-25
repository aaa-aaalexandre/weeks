#include <bits/stdc++.h>
using namespace std;

int main() {
    string q;
    
    cout << "Enter a sentence/string, and it will be reversed!" << endl;
    getline(cin, q);

    reverse(q.begin(), q.end());

    cout << "This is the output of the reversed sentence/string: " << q << endl;

    return 0;
}
