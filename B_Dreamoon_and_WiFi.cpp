#include <bits/stdc++.h>
using namespace std;

// Function to calculate factorial for combinatorics
double factorial(int n) {
    if (n == 0 || n == 1) return 1;
    double res = 1;
    for (int i = 2; i <= n; ++i) {
        res *= i;
    }
    return res;
}

// Function to calculate nCr (combinations)
double nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    int target_position = 0, current_position = 0, num_questions = 0;

    // Calculate the target position from the original commands (s1)
    for (char c : s1) {
        target_position += (c == '+') ? 1 : -1;
    }

    // Calculate the current position from the received commands (s2)
    // and count the number of '?'
    for (char c : s2) {
        if (c == '+') current_position += 1;
        else if (c == '-') current_position -= 1;
        else num_questions++;  // Count '?' which are unrecognized commands
    }

    // Calculate the difference between the current position and target position
    int difference = target_position - current_position;

    // Check if it's possible to reach the target position with the given '?' moves
    if (abs(difference) > num_questions || (difference + num_questions) % 2 != 0) {
        // If the difference is too large or odd, it's impossible to reach the target
        cout << fixed << setprecision(12) << 0.0 << endl;
        return 0;
    }

    // Now, calculate how many '+' we need among the '?' to make the positions match
    int moves_needed = (difference + num_questions) / 2;

    // Calculate the number of valid ways to achieve the target using combinations
    double valid_ways = nCr(num_questions, moves_needed);
    double total_ways = pow(2, num_questions);

    // Probability is the ratio of valid ways to total possible ways
    double probability = valid_ways / total_ways;

    cout << fixed << setprecision(12) << probability << endl;
    return 0;
}
