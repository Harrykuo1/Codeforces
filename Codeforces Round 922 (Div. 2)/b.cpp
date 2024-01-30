#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int t, n;
struct Tmp{
    int a, b, mul;
    bool operator < (const Tmp &R) const{
        return mul < R.mul;
    }
};
Tmp arr[200005];
 
signed main(){
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        for(int i=0;i<n;i++){
            scanf("%lld", &arr[i].a);
        }
        for(int i=0;i<n;i++){
            scanf("%lld", &arr[i].b);
            arr[i].mul = arr[i].a * arr[i].b;
        }
        sort(arr, arr + n);
        for(int i=0;i<n;i++){
            printf("%lld ", arr[i].a);
        }
        printf("\n");
        for(int i=0;i<n;i++){
            printf("%lld ", arr[i].b);
        }
        printf("\n");
    }
}