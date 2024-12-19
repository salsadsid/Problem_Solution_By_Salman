### Problem Explanation

In this problem, you are given a binary array (containing only 0s and 1s) of length `n`. An **inversion** in an array is defined as a pair of indices `(i, j)` such that `i < j` and `a[i] > a[j]`. Your goal is to maximize the number of inversions by performing at most one **flip** operation (changing one `0` to `1` or one `1` to `0`).

### Key Concepts

1. **Inversion**: In the context of a binary array, an inversion happens when a `1` appears before a `0` in the array.
2. **Operation**: You can flip at most one element in the array, which could either increase or decrease the number of inversions.

### Approach Breakdown

1. **Initial Count of Inversions**:

   - Traverse the array from left to right.
   - Count the number of inversions by counting how many `1`s appear before each `0`.
   - Simultaneously, keep track of the total number of `0`s and `1`s.

2. **Maximizing Inversions**:

   - **Option 1**: Try flipping a `0` to `1`. This would potentially increase inversions by reducing the number of `0`s and increasing the number of `1`s. Track how the inversion count changes if you flip any `0` in the array.

   - **Option 2**: Try flipping a `1` to `0`. This would potentially increase inversions by introducing more opportunities for `1 > 0` pairs when traversing the array from the right. Track how the inversion count changes if you flip any `1` in the array.

3. **Output the Maximum**:
   - The maximum number of inversions will be the greatest value between the initial inversion count and the counts after applying each flip.

### Solution Walkthrough

For the first test case `4` and the array `[1, 0, 1, 0]`:

1. **Initial Inversions**:

   - The array `[1, 0, 1, 0]` has 3 inversions:
     - `(1, 2)`, `(1, 4)`, and `(3, 4)`.
   - Initial inversion count = 3.

2. **Flipping a `0` to `1`**:

   - Flipping the `2nd` element to `1` gives the array `[1, 1, 1, 0]`. It has 2 inversions (`(1, 4)` and `(2, 4)`).
   - Flipping the `4th` element to `1` gives the array `[1, 0, 1, 1]`. It has 3 inversions (`(1, 2)`, `(1, 4)`, `(3, 4)`).
   - The best case by flipping a `0` results in 3 inversions.

3. **Flipping a `1` to `0`**:
   - Flipping the `1st` element to `0` gives the array `[0, 0, 1, 0]`. It has 2 inversions.
   - Flipping the `3rd` element to `0` gives the array `[1, 0, 0, 0]`. It has 2 inversions.
   - The best case by flipping a `1` results in 3 inversions.

Thus, the maximum number of inversions you can get is `3`.

### Code Explanation

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }

        // Initial inversion count and count of 0s and 1s
        long long maxo=0,zero=0,one=0;
        for(long long i=0;i<n;i++){
            if(v[i]==0){
                maxo += one;  // Count inversions where 1s appear before this 0
                zero++;
            }
            else{
                one++;
            }
        }

        // Case 1: Flip a 0 to 1
        long long count1=0, maxo1=0;
        for(long long i=0;i<n;i++){
            if(v[i]==0){
                zero--;  // We're changing a 0, so reduce zero count
                maxo1 = max(maxo1, maxo - count1 + zero);
            }
            else if(v[i]==1){
                count1++;  // Count the number of 1s before the current index
            }
        }

        // Case 2: Flip a 1 to 0
        long long count0=0, maxo2=0;
        for(long long i=n-1;i>=0;i--){
            if(v[i]==1){
                one--;  // We're changing a 1, so reduce one count
                maxo2 = max(maxo2, maxo + one - count0);
            }
            else{
                count0++;  // Count the number of 0s after the current index
            }
        }

        // Output the maximum of the original count, flipping a 0 or flipping a 1
        cout << max({maxo, maxo1, maxo2}) << endl;
    }

    return 0;
}
```

### Summary

- The solution computes the initial inversion count.
- Then it checks how the inversion count would change if you flip a `0` or a `1`.
- Finally, it outputs the maximum possible inversion count after the optimal flip.

This approach ensures the result is computed efficiently even for large input sizes.
