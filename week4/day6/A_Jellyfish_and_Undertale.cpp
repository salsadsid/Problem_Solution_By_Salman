#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long int m, s, f;
        cin >> m >> s >> f;
        
        vector<int> tools(f);
        for (int i = 0; i < f; i++) {
            cin >> tools[i];
        }
        
        sort(tools.rbegin(), tools.rend());
        
        long long time_passed = 0;
        long long current_timer = s;
        
        for (int i = 0; i < f; i++) {
        
            while (current_timer > 1) {
                current_timer--;
                time_passed++;
            }
            
            current_timer = min(current_timer + tools[i], m);
            
            current_timer--;
            time_passed++;
            
            if (current_timer == 0) {
                break;
            }
        }
        
        while (current_timer > 0) {
            current_timer--;
            time_passed++;
        }
        
        cout << time_passed << endl;
    }

    return 0;
}
