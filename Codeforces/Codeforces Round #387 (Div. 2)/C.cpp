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
const int N = 111;
const int M = 1e6 + 1111;

int n, q;
int a[N];
//pii t[M];

int main(){
#ifdef LOCAL_TEST
	freopen("in.txt","r",stdin);
#endif
	//freopen("out.txt","w",stdout);
    scanf("%d%d", &n, &q);
    int pre = 1;
    REP(i, 0, q){
        //int tt;
        //scanf("%d", &tt);
        //scanf("%d%d", &t[tt].fi, &t[tt].se);
        int t, k, d;
        scanf("%d%d%d", &t, &k, &d);
        REP(j, 0, n) if(a[j] > 0) a[j] -= (t - pre);
        pre = t;
        int res = 0;
        
        int kk = k;
        REP(j, 0, n){
            if(a[j] <= 0 && kk > 0){
                kk --;
            }
        }
        if(kk > 0){
            puts("-1");
            continue;
        }
        REP(j, 0, n){
            if(a[j] <= 0 && k > 0){
                a[j] = d;
                res += j + 1;
                k --;
            }
        }
        
        printf("%d\n", res);
    }
    return 0;
}
