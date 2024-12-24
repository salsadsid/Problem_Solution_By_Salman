This approach is designed to efficiently solve the problem by leveraging the specific structure of the input data and the conditions provided:

### Problem Recap:

Monocarp needs to send invitations such that at least **two friends attend**. A friend will attend if both they and their best friend receive an invitation. The problem hints at the existence of **cycles** in the friendship graph, where each friend has a distinct best friend.

### Key Points:

1. **Cycle of size 2 (mutual friends)**: If there exists a **2-cycle** where friend \( i \)'s best friend is \( j \), and \( j \)'s best friend is \( i \), then only **2 invitations** are necessary. Both friends can attend if they both get invitations, and this is the smallest number of invitations required to guarantee attendance of at least two friends.
2. **Larger cycles**: If no 2-cycle is found, then you need to invite at least **3 friends** in larger cycles to ensure at least 2 friends attend. The reasoning behind this is that simply inviting 2 friends in larger cycles might not ensure both will attend due to the dependency on their best friends receiving invitations.

### Why this approach works:

- The condition `p[p[i]] == i` directly checks if friend \( i \) and their best friend \( p[i] \) are mutual friends (i.e., they form a 2-cycle). In this case, you only need to send **2 invitations**.
- If no 2-cycle is found, the algorithm sets the answer to **3**, which is the next minimal number of invitations required in larger cycles.

### Efficiency:

- **Cycle detection** is implicit: Instead of explicitly finding and tracking all cycles, the check `p[p[i]] == i` efficiently detects 2-cycles, which are the most important cycles for minimizing the number of invitations.
- This approach runs in **linear time** \( O(n) \) per test case because we only need to iterate over the friends once to check for mutual relationships. The overall complexity is \( O(t \times n) \), where \( t \) is the number of test cases and \( n \) is the number of friends.

### Why choose this over more complex approaches?

- **Simplicity**: It focuses only on the crucial condition of finding 2-cycles, which guarantees the minimum number of invitations. More complex approaches might involve fully detecting and handling arbitrary cycle lengths, which is unnecessary for this problem.
- **Correctness**: The problem guarantees that at least one cycle will exist, and the minimum number of invitations is determined by the presence or absence of a 2-cycle. This makes the approach both efficient and correct for all inputs.

In summary, this approach is both **minimal** in terms of invitation count and **optimal** in terms of computational efficiency.
