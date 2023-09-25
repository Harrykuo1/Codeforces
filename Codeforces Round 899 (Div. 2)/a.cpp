#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main(){
    int t, n, num;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        int ans = 0;
        for(int i=0;i<n;i++){
            scanf("%lld", &num);
            ans++;
            if(ans == num){
                ans++;
            }
        }
        printf("%lld\n", ans);
    }
}