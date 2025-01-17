#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if t products can be produced within 'time' seconds
bool canProduce(long long time, const vector<int>& machines, long long t) {
    long long totalProducts = 0;
    for (int k : machines) {
        totalProducts += time / k;
        if (totalProducts >= t) return true; // Early exit if we already meet the requirement
    }
    return totalProducts >= t;
}

// Binary search to find the minimum time required
long long minTimeToProduce(int n, long long t, const vector<int>& machines) {
    long long low = 1, high = t * (long long)(*max_element(machines.begin(), machines.end()));
    long long result = high;

    while (low <= high) {
        long long mid = (low + high) / 2;
        if (canProduce(mid, machines, t)) {
            result = mid; // Store possible minimum time
            high = mid - 1; // Try for smaller time
        } else {
            low = mid + 1; // Need more time
        }
    }

    return result;
}

int main() {
    int n;
    long long t;
    cin >> n >> t;
    vector<int> machines(n);

    for (int i = 0; i < n; i++) {
        cin >> machines[i];
    }

    cout << minTimeToProduce(n, t, machines) << endl;
    return 0;
}
