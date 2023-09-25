#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int t, n;
 
signed main(){
    scanf("%lld", &t);
    while(t--){
        vector<set<int> > s;
        unordered_map<int, int>ump;
        scanf("%lld", &n);
        for(int i=0;i<n;i++){
            set<int> ss;
            int nums, num;
            scanf("%lld", &nums);
            while(nums--){
                scanf("%lld", &num);
                ump[num] = 1;
                ss.insert(num);
            }
            s.push_back(ss);
        }
 
        int ans = 0;
        for(int i=1;i<=50;i++){
            if(ump.find(i) == ump.end()) continue;
            set<int> testSet;
            for(int j=0;j<n;j++){
                if(s[j].find(i) == s[j].end()){
                    testSet.insert(s[j].begin(), s[j].end());
                }
            }
            ans = max(ans, (int)testSet.size());
        }
        printf("%lld\n", ans);
    }
}