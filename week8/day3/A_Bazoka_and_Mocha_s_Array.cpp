#include<bits/stdc++.h>
using namespace std;

const int MAX_ARRAY_SIZE = 1e5 + 10; // Maximum possible array size
int a[MAX_ARRAY_SIZE]; // Array to hold input values

int main() {
    int testCases; // Number of test cases
    cin >> testCases;

    while(testCases--) {
        int arraySize; // Size of the array for this test case
        cin >> arraySize;

        // Reading the array elements
        for(int i = 1; i <= arraySize; i++) {
            cin >> a[i];
        }

        int rotationPoint = 0; // To store the position of the first violation (if any)

        // Check where the array stops being non-decreasing
        for(int i = 1; i < arraySize; i++) {
            if(a[i] > a[i + 1]) {
                rotationPoint = i;
                break;
            }
        }

        // If no violation found, array is already non-decreasing
        if(rotationPoint == 0) {
            cout << "Yes\n";
        } else {
            // Check if the remaining part of the array after the violation is non-decreasing
            bool isRotatable = true;
            for(int i = rotationPoint + 1; i <= arraySize; i++) {
                int nextIndex = (i % arraySize) + 1; // Circular check (wraps around)
                if(a[i] > a[nextIndex]) {
                    isRotatable = false;
                    break;
                }
            }
            // Output result based on whether the array is rotatable
            if(isRotatable) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }

    return 0;
}
