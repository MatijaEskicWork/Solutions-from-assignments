#include <bits/stdc++.h>
using namespace std;
#define BIGINF (int) 4e18 + 7
#define MOD7 1000000007
#define MOD9 1e9 + 9
#define INF  (int)2e9 + 7
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
typedef long long ll;
typedef long double ld;
typedef string str;
typedef double d;
typedef unsigned u;
typedef unsigned long long ull;

int W = 100005;


int main () {
    freopen("inputf.txt", "r", stdin);
    freopen("outputf.txt", "w", stdout);
    int n, c;

    long long dp[W];
    SCD(n);
    SCD(c);
    int w[105], v[105];
    for (int i = 0; i < n; i++) {
    	SCD(w[i]);
    	SCD(v[i]);
    }
   	memset(dp, 0, sizeof(dp));
    long long ans = 0;
    for (int i = 0; i < n; i++) {
    	for (int j = c - w[i]; j >= 0; j--) {
    		dp[j + w[i]] = max(dp[j + w[i]], dp[j] + v[i]);
    	}
    }

    for (int i = 0; i <= c; i++)
    	ans = max(ans, dp[i]);
    printf("%lld", ans);

    return 0;
}

