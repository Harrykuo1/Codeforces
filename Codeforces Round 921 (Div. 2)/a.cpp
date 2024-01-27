#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int t, n, k;
 
signed main(){
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld", &n, &k);
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                printf("%c", 'a' + j);
            }
        }
        printf("\n");
    }
}