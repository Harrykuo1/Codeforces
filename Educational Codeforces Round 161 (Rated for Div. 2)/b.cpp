#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int t, n, arr[300005];
 
signed main(){
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        map<int, int>mp;
        for(int i=0;i<n;i++){
            scanf("%lld", &arr[i]);
            mp[arr[i]]++;
        }
        int sum = 0, ans = 0;
        for(auto it : mp){
            // printf("%lld %lld\n", it.first, it.second);
            if(sum > 0 && it.second >= 2){
                ans += sum * ((it.second) * (it.second - 1) / 2);
            }
            if(it.second >= 3){
                ans += (it.second) * (it.second - 1) * (it.second - 2) / 6;
            }
            sum += it.second;
        }
        printf("%lld\n", ans);
    }
 
}
/*
2 2 3
4 4 8
0 1 2 3 4 5
1 2 4 8 16 32
/**/