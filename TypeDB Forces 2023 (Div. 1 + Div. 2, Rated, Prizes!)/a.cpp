#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main(){
    int t, n; 
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%2==0){
            printf("%d %d\n",1, n/2);
        }
        else{
            printf("-1\n");
        }
    }
}