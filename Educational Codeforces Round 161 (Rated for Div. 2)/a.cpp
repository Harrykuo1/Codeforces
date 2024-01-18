#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int t, n;
char a[100], b[100], c[100];
 
signed main(){
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %s %s %s", &n, a, b, c);
        int same = 0;;
        for(int i=0;i<n;i++){
            if(c[i] == a[i] || c[i] == b[i]){
                same++;
            }
        }
        if(same != n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
 
}
