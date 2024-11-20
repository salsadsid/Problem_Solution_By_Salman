#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s; // Reading input: n is size of array, s is the sum limit
    vector<int> arr(n);
    
    // Reading array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_len = 0;  // Variable to store the maximum length of a "good" segment

    // Brute force: Check all possible subarrays
    for (int l = 0; l < n; l++) {
        int sum = 0;  // Sum of the current subarray starting from index l
        
        // Try to extend the subarray from l to r
        for (int r = l; r < n; r++) {
            sum += arr[r];  // Adding the element at r to the sum
            
            // If the sum is less than or equal to s, update the maximum length
            if (sum <= s) {
                max_len = max(max_len, r - l + 1);  // Update the length of the subarray
            } else {
                break;  // If the sum exceeds s, no point in extending this subarray further
            }
        }
    }

    // Output the result: the length of the longest "good" segment
    cout << max_len << endl;
    
    return 0;
}
