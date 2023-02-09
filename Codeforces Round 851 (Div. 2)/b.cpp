#include<bits/stdc++.h>
using namespace std;
 
int n, t, a, b;
int count(int num) {
    int ans = 0;
    while (num) {
        ans += num % 10;
        num /= 10;
    }
    return ans;
}
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            printf("%d %d\n", n / 2, n / 2);
        }
        else {
            a = n / 2, b = n / 2 + 1;
            while (abs(count(a) - count(b)) > 1) {
                int ap = count(a);
                int bp = count(b);
                a -= abs(ap - bp)/2;
                b += abs(ap - bp)/2;
            }
 
            printf("%d %d\n", a, b);
        }
 
    }
}