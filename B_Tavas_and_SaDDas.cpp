#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    string n;
    cin >> n;
    
    int length = n.size();
    int index = 0;

    // Calculate the binary-like representation of the lucky number
    for (int i = 0; i < length; i++) {
        if (n[i] == '7') {
            index |= (1 << (length - i - 1));  // Set the corresponding bit if the digit is '7'
        }
    }
    
    // Add the count of all lucky numbers with fewer digits
    for (int i = 1; i < length; i++) {
        index += (1 << i);  // Add 2^i for each number of digits less than 'length'
    }

    // Output the 1-based index
    cout << index + 1 << endl;

    return 0;
}
