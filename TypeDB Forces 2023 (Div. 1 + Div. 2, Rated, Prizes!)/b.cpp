#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define TEST 1
 
int mx;
 
unordered_map<int, int> mp;
unordered_map<int, int> getMap(int n) {
    mp.clear();
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                mp[i]++;
            }
            if (mp[i] > mx) {
                mx = mp[i];
            }
        }
    }
    if (n != 1) {
        mp[n] = 1;
    }
    return mp;
}
 
signed main() {
    int t, n;
    scanf("%lld", &t);
    while (t--) {
        int ans = 0;
        mx = 1;
        scanf("%lld", &n);
 
        unordered_map<int, int> mp = getMap(n);
        for (int i = 0;i < mx;i++) {
            int tmp = 1;
            for (const auto& s : mp) {
                if (s.second > 0) {
                    mp[s.first]--;
                    tmp *= s.first;
                }
            }
            ans += tmp;
        }
 
        printf("%lld\n", ans);
    }
}