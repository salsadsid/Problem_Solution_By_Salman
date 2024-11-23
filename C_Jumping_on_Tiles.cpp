#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        multiset<pair<char, int>> st;
        vector<pair<char, int>> vc;

        // Insert intermediate tiles into the multiset
       
        // cout<<vc.size()<<"das"<<endl;
        // if (vc.size() < 1) {
        //     // cout << "Error: vc is empty!" << endl;
        //     continue;  // Skip this case if no valid intermediate tiles exist
        // }

        // Debugging: print the contents of vc
        // cout << "vc.size(): " << vc.size() << endl;
        // for (int i = 0; i < vc.size(); i++) {
        //     cout << "vc[" << i << "]: " << vc[i].first << ", " << vc[i].second << endl;
        // }

        // Calculate the total cost
        if(s.size()==2)
        {
            for (int i = 0; i < s.size(); i++) {
            st.insert({s[i], i});
            }

            // Transfer from multiset to vector
            for (auto it : st) {
                vc.push_back(it);
            }
            int ans=0;
            for (int i = 0; i < vc.size()-1 ; i++) {  // Jump between intermediate tiles
                ans += abs(vc[i].first - vc[i + 1].first);
            }
            

            // Print the answer
            cout << ans << " " << 2 << endl;
            for (int i = 0; i < vc.size(); i++) {
                cout << vc[i].second + 1 << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i < s.size() - 1; i++) {
            st.insert({s[i], i});
            }

            // Transfer from multiset to vector
            for (auto it : st) {
                vc.push_back(it);
            }
            int ans = abs(int(s[0] - vc[0].first));  // First jump
            for (int i = 0; i < vc.size() - 1; i++) {  // Jump between intermediate tiles
                ans += abs(vc[i].first - vc[i + 1].first);
            }
            ans += abs(int(s[s.size() - 1] - vc[vc.size() - 1].first));  // Last jump

            // Print the answer
            cout << ans << " " << vc.size() + 2 << endl;
            cout << 1 << " ";
            for (int i = 0; i < vc.size(); i++) {
                cout << vc[i].second + 1 << " ";
            }
            cout << s.size() << " ";
            cout << endl;
        }
    }

    return 0;
}
