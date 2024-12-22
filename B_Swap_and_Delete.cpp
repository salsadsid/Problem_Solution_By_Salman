#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        string s;
        cin >> s;  // Input binary string

        int cnt[2] = {0, 0};  // Count of '0's and '1's
        for (char c : s) {
            cnt[c - '0']++;  // Increment count of either '0' or '1'
        }

        // Iterate through the string to find the point to stop
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || cnt[1 - (s[i] - '0')] == 0) {
                cout << s.size() - i << endl;  // Output result
                break;
            }
            cnt[1 - (s[i] - '0')]--;  // Decrease the count of the opposite character
        }
    }
    return 0;
}
