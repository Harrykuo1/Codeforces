#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int t, x, n;
 
signed main(){
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld", &x, &n);
        if(x % n == 0){
            printf("%lld\n", x / n);
            continue;
        }
        int ans = x / n;
        set<int> s;
        int sqrtX = sqrt(x);
        for(int i=1;i<=sqrtX;i++){
            if(x % i == 0){
                s.insert(i);
                s.insert(x / i);
            }
        }
        auto it = s.lower_bound(ans);
        if(ans < *it){
            it--;
        }
        printf("%lld\n", *it);
    }
}