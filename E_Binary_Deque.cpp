#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, s;
        cin >> n >> s;

        vector<int> arr(n);
        long long total_sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total_sum += arr[i];
        }

        // Case 1: If the total sum is less than the required sum, it's impossible.
        if (total_sum < s) {
            cout << -1 << endl;
            continue;
        }

        // Case 2: If the total sum is equal to the required sum, no operations needed.
        if (total_sum == s) {
            cout << n-s << endl;
            continue;
        }

        // Calculate the target sum to remove
        long long target = total_sum - s;
        
        // Sliding window to find the longest subarray with sum equal to 'target'
        long long current_sum = 0;
        int left = 0, max_len = -1;

        for (int right = 0; right < n; right++) {
            current_sum += arr[right];

            // Shrink the window from the left if current_sum exceeds target
            while (current_sum > target && left <= right) {
                current_sum -= arr[left];
                left++;
            }

            // If we find a subarray with sum equal to target, update the max_len
            if (current_sum == target) {
                max_len = max(max_len, right - left + 1);
            }
        }

        // If no valid subarray found, print -1
        if (max_len == -1) {
            cout << -1 << endl;
        } else {
            // Otherwise, print the number of operations (n - max_len)
            cout << n - max_len << endl;
        }
    }

    return 0;
}
