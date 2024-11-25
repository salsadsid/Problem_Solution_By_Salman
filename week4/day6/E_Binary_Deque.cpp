#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> arr(n);
        int totalSum = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            totalSum += arr[i];
        }

        if (totalSum < s) {
            cout << -1 << endl;
            continue;
        }


        if (totalSum == s) {
            cout << 0 << endl;
            continue;
        }

        int left = 0, currentSum = 0, maxLength = 0;

        for (int right = 0; right < n; right++) {
            currentSum += arr[right];

            while (currentSum > s) {
                currentSum -= arr[left];
                left++;
            }
            if (currentSum == s) {
                maxLength = max(maxLength, right - left + 1);
            }
        }
        int minOperations = n - maxLength;
        cout << minOperations << endl;
    }

    return 0;
}
