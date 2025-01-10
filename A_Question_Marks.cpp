#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;


        map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }

        int max_score = 0;


        for (char ch : {'A', 'B', 'C', 'D'}) {
            max_score += min(freq[ch], n);
        }

        
        int remaining = 4 * n - max_score;  
        max_score += min(remaining, freq['?']);

        cout << max_score << endl;
    }
    return 0;
}
