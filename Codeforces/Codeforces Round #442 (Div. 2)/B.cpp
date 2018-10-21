#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
//#pragma comment(linker, "/STACK:1024000000,1024000000")

using namespace std;

#define ll long long
#define SZ(x) ((int)(x).size())
#define ALL(v) (v).begin(), (v).end()
#define foreach(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); ++ i)
#define reveach(i, v) for (__typeof((v).rbegin()) i = (v).rbegin(); i != (v).rend(); ++ i)
#define REP(i,a,n) for ( int i=a; i<int(n); i++ )
#define FOR(i,a,n) for ( int i=n-1; i>= int(a);i-- )
#define lson rt<<1, L, m
#define rson rt<<1|1, m, R
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define fi first
#define se second
#define CLR(a, b) memset(a, b, sizeof(a))
#define Max(a, b) a = max(a, b)
#define Min(a, b) a = min(a, b)
#define lowbit(x) (x) & (-(x))

const int N = 5e3 + 7;

char s[N];
int n;
int b[N];

int main(){
#ifdef LOCAL_TEST
	freopen("/Users/cosss/in.txt","r",stdin);
#endif
	//freopen("/Users/cosss/out.txt","w",stdout);

    scanf("%s", s + 1);

    n = strlen(s + 1);

    REP(i, 1, n + 1){
        b[i] = b[i - 1] + (s[i] == 'b');
    }

    int res = b[n];
    int p = 0, q = 0;
    REP(i, 0, n + 1){
        if(s[i] == 'a') p ++;
        q = 0;
        Max(res, p + q + b[n] - b[i]);
        FOR(j, i + 1, n + 1){

            if(s[j] == 'a') q ++;
            Max(res, p + q + b[j - 1] - b[i]);
        }
    }

    printf("%d\n", res);

    return 0;
}
