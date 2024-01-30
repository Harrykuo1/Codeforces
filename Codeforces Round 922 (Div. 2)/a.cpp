#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int t, n, m;
 
signed main(){
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld", &n, &m);
        if(m % 2){
            m--;
        }
        printf("%lld\n", n * m / 2);
    }
}
