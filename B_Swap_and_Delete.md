### Problem Recap

You are given a binary string `s` consisting of only '0's and '1's. You can perform two operations:

1. **Delete** any character at a cost of 1 coin.
2. **Swap** any two characters for free.

Your goal is to make the string `t` such that for every character `t[i]`, it is different from the corresponding character in the original string `s[i]`. The **minimum total cost** to achieve this transformation is what we want to determine.

### Key Insight:

The key observation here is that, to make a string "good," you need to eliminate blocks of consecutive characters of the same type. The string can be transformed at no cost using swaps, but you must delete some characters to alternate between `0` and `1`.

### Approach Explanation:

1. **Count '0's and '1's**: First, we count how many `0`s and `1`s are in the string. This will help us understand the balance of characters.

2. **Iterating Through the String**: We loop through the string and check when all the characters of one type (either all `0`s or all `1`s) have been removed, which helps us determine how much of the string needs to be deleted.

3. **Stopping Condition**: For each index, we check if all the characters of the opposite type (`0` for `1`s or `1` for `0`s) have been deleted. If yes, the string starting from that index to the end becomes "good."

4. **Result**: The number of characters left after this point is the length of the string minus the current index `i`, which is the minimal cost of deletions required.

### Why This Works:

The key idea is that the string becomes "good" when one of the character types (`0` or `1`) is fully removed. If you can remove all `0`s or all `1`s by deleting just the right number of characters, the remaining part of the string can be rearranged (using swaps) to alternate with minimal deletions.

### Example Walkthrough:

Let's walk through an example:

#### Example:

```
s = "011"
```

1. **Initial Count**:

   - `cnt[0] = 1` (one '0')
   - `cnt[1] = 2` (two '1's)

2. **Iteration**:

   - At `i = 0`, the character is `'0'`, so we check if all `1`s are gone. Since `cnt[1] > 0`, we decrease `cnt[1]` by 1. Now `cnt[1] = 1`.
   - At `i = 1`, the character is `'1'`, so we check if all `0`s are gone. Since `cnt[0] > 0`, we decrease `cnt[0]` by 1. Now `cnt[0] = 0`.
   - At `i = 2`, the character is `'1'`, and now `cnt[0] = 0`, meaning all `0`s have been removed.

3. **Result**:
   - The string becomes good at index `i = 2`, and the cost to make it good is `len(s) - i = 3 - 2 = 1`.
   - So, the result for this test case is `1`.

#### Another Example:

```
s = "0101110001"
```

1. **Initial Count**:

   - `cnt[0] = 5` (five '0's)
   - `cnt[1] = 5` (five '1's)

2. **Iteration**:

   - At `i = 0`, the character is `'0'`. `cnt[1] > 0`, so we decrease `cnt[1]` by 1.
   - At `i = 1`, the character is `'1'`. `cnt[0] > 0`, so we decrease `cnt[0]` by 1.
   - At `i = 2`, the character is `'0'`. `cnt[1] > 0`, so we decrease `cnt[1]` by 1.
   - At `i = 3`, the character is `'1'`. `cnt[0] > 0`, so we decrease `cnt[0]` by 1.
   - At `i = 4`, the character is `'1'`. `cnt[0] > 0`, so we decrease `cnt[0]` by 1.
   - At `i = 5`, the character is `'1'`. `cnt[0] > 0`, so we decrease `cnt[0]` by 1.
   - At `i = 6`, the character is `'0'`. Now `cnt[1] = 0`, meaning all `1`s are removed.

3. **Result**:
   - The string becomes good at index `i = 6`, and the cost to make it good is `len(s) - i = 10 - 6 = 4`.
   - So, the result for this test case is `4`.

### Conclusion:

This approach is correct because it uses the idea that alternating between `0`s and `1`s makes the string "good," and to achieve that, we need to delete either all `0`s or all `1`s from the string. The Python-to-C++ conversion directly follows this logic, and the solution is optimal for the given problem constraints.
