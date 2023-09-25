#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int arr[200005], dp[200005], t, n;
 
signed main(){
    scanf("%lld", &t);
    while(t--){
        int ans = 0;
        scanf("%lld", &n);
        memset(dp, 0, sizeof(dp));
        for(int i=0;i<n;i++){
            scanf("%lld", &arr[i]);
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i] >= 0){
                dp[i] = dp[i+1] + arr[i];
            }
            else{
                dp[i] = dp[i+1];
            }
        }
        for(int i=0;i<n;i++){
            if(i % 2){
                ans = max(ans, dp[i+1]);
            }
            else{
                ans = max(ans, dp[i+1] + arr[i]);
            }
        }
        printf("%lld\n", ans);
    }
}