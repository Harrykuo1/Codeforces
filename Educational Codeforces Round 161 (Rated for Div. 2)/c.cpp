#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int t, n, ans, arr[100005], l[100005], r[100005], direct[100005], q, a, b;
 
signed main(){
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        for(int i=1;i<=n;i++){
            scanf("%lld", &arr[i]);
        }
        direct[1] = 1, direct[n] = -1;
        for(int i=2;i<=n-1;i++){
            if(llabs(arr[i]-arr[i-1]) > llabs(arr[i]-arr[i+1])){
                direct[i] = 1;
            }
            else{
                direct[i] = -1;
            }
        }
        l[1] = 0, r[n] = 0;
        for(int i=2;i<=n;i++){
            if(direct[i] == -1){
                l[i] = l[i-1] + 1;
            }
            else{
                l[i] = l[i-1] + llabs(arr[i] - arr[i-1]);
            }
        }
        for(int i=n-1;i>=1;i--){
            if(direct[i] == 1){
                r[i] = r[i+1] + 1;
            }
            else{
                r[i] = r[i+1] + llabs(arr[i] - arr[i+1]);
            }
        }
        scanf("%lld", &q);
        while(q--){
            scanf("%lld %lld", &a, &b);
            if(a != b){
                if(a > b){
                    ans = l[a] - l[b];
                }
                else{
                    ans = r[a] - r[b];
                }
                printf("%lld\n", ans);
            }
            else{
                printf("0\n");
            }
        }
    }
 
}