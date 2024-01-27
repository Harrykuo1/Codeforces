#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int t, n, k, len;
char arr[1005];
bool check[26];
 
signed main(){
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld %lld %s", &n, &k, &len, arr);
        int group = 0, finishLetter = 0;
        memset(check, false, sizeof(check));
        int i = 0;
        string ans;
        while(group < n){
            if(i >= len){
                break;
            }
            if(arr[i] < 'a' + k && !check[arr[i] - 'a']){
                check[arr[i] - 'a'] = true;
                finishLetter++;
            }
            if(finishLetter >= k){
                ans.push_back(arr[i]);
                group++;
                memset(check, false, sizeof(check));
                finishLetter = 0;
            }
            i++;
        }
        char more = 0;
        for(int i=0;i<26;i++){
            if(!check[i]){
                more = 'a' + i;
                break;
            }
        }
        if(group == n){
            printf("YES\n");
        }
        else{
            for(int i=group;i<n;i++){
                ans.push_back(more);
            }
            printf("NO\n");
            cout << ans << "\n";
        }
    }
}