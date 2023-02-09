#include<bits/stdc++.h>
using namespace std;
 
int n, t, arr[100000];
int main(){
    scanf("%d", &t);
    while(t--){
        int two = 0;
        scanf("%d", &n);
        for(int i=1;i<=n;i++){
            scanf("%d", &arr[i]);
            if(arr[i] == 2) two++;
        }
        int ans = 0, cnt = 0, i;
        if(two%2==0){
            for(i=1;i<=n;i++){
                if(arr[i] == 2) cnt++;
                if(cnt == two/2) break;
                //printf("%d %d\n",cnt, two);
            }
        }
        else{
            i = -1;
        }  
        printf("%d\n",i);
    }
}