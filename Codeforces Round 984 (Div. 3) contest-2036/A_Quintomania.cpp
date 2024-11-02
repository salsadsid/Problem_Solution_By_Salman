#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if(abs(arr[i]-arr[i+1])==5 || abs(arr[i]-arr[i+1])==7){
                continue;
            }   
            else{
                flag = false;
                break;
            }
            // cout<<abs(arr[i]-arr[i+1])<<" ";
        }

        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}



/// solution by other person

// #include <bits/stdc++.h>
// #define all(x) x.begin(), x.end()
// #define endl '\n'
// #define yes cout << "Yes" << endl
// #define no cout << "No" << endl

// using namespace std;

// void solve() {
//     string str;
//     cin >> str;
//     int q;
//     cin >> q;

//     if (str.size() < 4) {
//         while (q--) {
//             int a, b;
//             cin >> a >> b;
//             no;
//         }
//         return;
//     }

//     set<int> st;

//     for (int i = 0; i <= str.size() - 4; i++) {
//         if (str.substr(i, 4) == "1100") {
//             st.insert(i);
//         }
//     }

//     while (q--) {
//         int i;
//         char v;
//         cin >> i >> v;
//         i--;

//         for (int j = max(0, i - 3); j <= min((int)str.size() - 4, i); j++) {
//             if (str.substr(j, 4) == "1100") {
//                 st.erase(j);
//             }
//         }

//         str[i] = v;

//         for (int j = max(0, i - 3); j <= min((int)str.size() - 4, i); j++) {
//             if (str.substr(j, 4) == "1100") {
//                 st.insert(j);
//             }
//         }

//         if (!st.empty()) cout << "Yes" << endl;
//         else cout << "No" << endl;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t = 1;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

