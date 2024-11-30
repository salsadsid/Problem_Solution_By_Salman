### Hint

Think about addition in base two. Say a = 10101 and b = 1001 .What your operation does is it modifies the bits in your numbers, so if the first bit in a is 1 and the first bit in b is 1 (as is the case above) you can make both 0 by making that bit 1 in x . This is actually the only way you can decrease the resulting sum, so x = 1 is an answer above.

### Solution

Noticing the hint above, we can deduce that \( x = a \& b \), where \( \& \) is the bitwise AND operator. So, simply printing \( (a \oplus (a \& b)) + (b \oplus (a \& b)) \) works to achieve the desired result. However, there's an even more elegant formula. We leave it to you to prove that:

\[
(a \oplus (a \& b)) + (b \oplus (a \& b)) = a \oplus b
\]

where \( \oplus \) is the bitwise XOR operator. :)

### Prove

The symbol "¬a" (also written as \( \neg a \) or "not a") represents the **logical negation** or **bitwise complement** of \( a \).

- In **logic**, \( \neg a \) means "NOT \( a \)," which inverts the truth value of \( a \):

  - If \( a \) is **true** (1), then \( \neg a \) is **false** (0).
  - If \( a \) is **false** (0), then \( \neg a \) is **true** (1).

- In **bitwise operations** on binary numbers, \( \neg a \) flips all bits in \( a \):
  - If \( a \) is 1, \( \neg a \) becomes 0.
  - If \( a \) is 0, \( \neg a \) becomes 1.

In the context of XOR, \( \neg a \) was used to express the result when \( a \oplus 1 \) occurs, because XOR with 1 flips the value of \( a \). However, if this is unfamiliar, you can think of \( a \oplus 1 \) as simply inverting \( a \). So if \( a \) is 0, \( a \oplus 1 = 1 \), and if \( a \) is 1, \( a \oplus 1 = 0 \).

### what is this ¬a?

The symbol "¬a" (also written as \( \neg a \) or "not a") represents the **logical negation** or **bitwise complement** of \( a \).

- In **logic**, \( \neg a \) means "NOT \( a \)," which inverts the truth value of \( a \):

  - If \( a \) is **true** (1), then \( \neg a \) is **false** (0).
  - If \( a \) is **false** (0), then \( \neg a \) is **true** (1).

- In **bitwise operations** on binary numbers, \( \neg a \) flips all bits in \( a \):
  - If \( a \) is 1, \( \neg a \) becomes 0.
  - If \( a \) is 0, \( \neg a \) becomes 1.

In the context of XOR, \( \neg a \) was used to express the result when \( a \oplus 1 \) occurs, because XOR with 1 flips the value of \( a \). However, if this is unfamiliar, you can think of \( a \oplus 1 \) as simply inverting \( a \). So if \( a \) is 0, \( a \oplus 1 = 1 \), and if \( a \) is 1, \( a \oplus 1 = 0 \).
