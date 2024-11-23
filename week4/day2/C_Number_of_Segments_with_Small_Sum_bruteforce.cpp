#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long count = 0;  // To store the number of good segments

    for (int l = 0; l < n; l++) {
        long long sum = 0;
        for (int r = l; r < n; r++) {
            sum += a[r];
            if (sum <= s) {
                count++;  // Valid segment
            } else {
                break;  // Stop expanding this segment
            }
        }
    }

    cout << count << endl;

    return 0;
}
