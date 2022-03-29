#include<bits/stdc++.h>
using namespace std::chrono;
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define boolalpha std::cout << std::boolalpha;
#pragma GCC optimize("Ofast")
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef map<int,int> maap;
#define rep(i,a,b) for(long long i=a;i<=b;i++)
#define repl(i,a,b) for(long long i=a;i<b;i++)
#define pris(x) cout<<x<<" "
#define prione(x) cout<<x<<'\n'
#define prinone() cout<<'\n'
typedef long double lld;
/*------------------------------------------------------------------------------------------------*/
#define mem(arr) memset(arr,0,sizeof(arr))
#define sz(x) (int)(x).size()
#define pb push_back
#define po pop_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define curr_sum(v,x) accumulate(v.begin(),v.end(),x)
#define ctz(n) __builtin_ctz(n)
#define clz(n) __builtin_clz(n)
/*------------------------------------------------------------------------------------------------*/
#define mod 1000000007
const int maxN = (int)2e5+10;
const int inf=1000000000;
const ll inf64= 1e17;
const ll ninf = inf*(-1);
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a+b) % m)+m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m)+m) % m;}
#define sayyes cout<<"YES"<<endl;
#define sayno cout<<"NO"<<endl;
#ifdef Shivansh
    #define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
    #define dbg(x);
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*------------------------------------------------------------------------------------------------*/
template<class T>
vector< T > readvector(T n)
{ vector < T > arr(n); for(int  i =0; i < n ; i ++ ) cin>>arr[i]; return arr; }
template<class T>
void printvector(vector<T> arr,int n)
{ for(int  i =0; i<n; i ++ ) cout<<arr[i]<<" "; return; }
int gcd(int a, int b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll poow(ll x, ll y, ll p) { ll res = 1; x = x % p;
    if (x == 0) { return 0; } while (y > 0) { if(y & 1) { res = (res*x) % p; }  y = y>>1; x = (x*x) % p; }
    return res; }
ll nCr(int n, int r){ ll p = 1, k = 1;if (n - r < r) {r = n - r;}
    if (r != 0) {while (r) {p *= n;k *= r; ll m = gcd(p, k);p /= m;k /= m;n--;r--;}}
    else {p = 1;} return p;}
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
int setcount(int n) { return __builtin_popcount(n); }
class divisors {
public:
    vector<int> divs[maxN];
    divisors(int n) { for(int i=1;i<=n;i++) { for(int j=1;j*j<=i;j++) { if(i%j==0) {
        divs[i].pb(j); if(j*j!=i) { divs[i].pb(i/j); } } } } }
};
class DSU {
public:
    vector<int> parent, siz;
    DSU(int n) { siz.assign(n+1,1); parent.resize(n+1);
        for(int i=0;i<=n;i++) parent[i]=i; }
    int findpar(int x) { if(x == parent[x]) return x; return parent[x] = findpar(parent[x]); }
    void unite(int x,int y) { x = findpar(x); y = findpar(y);
        if(x == y) { return; } if(siz[y] > siz[x]) swap(x, y);
        parent[y] = x; siz[x] += siz[y]; } 
    bool sameset(int i, int j) { return findpar(i) == findpar(j);} };
/*------------------------------------------------------------------------------------------------*/
/*------------------------------Don't scroll more down..------------------------------------------*/
/* ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠ ⚠*/
/* ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠ ☠*/
/*------------------------------------------------------------------------------------------------*/
//function< bool (int,int)> check = [ &](int a,int b) { return a>b; };
vector<int> adj[maxN];
int up[maxN][20];
vector<int> depth;
void dfs(int u,int p)
{
    for(int v:adj[u])
    {
        if(v==p) continue;
        depth[v]=depth[u]+1;
        up[v][0]=u;
        for(int j=1;j<20;j++)
        {
            up[v][j]=up[up[v][j-1]][j-1];
        }
        dfs(v,u);
    }
}
int LCA(int x,int y)
{
    if(depth[x]<depth[y]) swap(x,y);
    int k=depth[x]-depth[y];
    for(int j=19;j>=0;j--)
    {
        if(1 & (k>>j)) x=up[x][j];
    }
    if(x==y) return x;
    for(int j=19;j>=0;j--)
    {
        if(up[x][j]!=up[y][j])
        {
            x=up[x][j];
            y=up[y][j];
        }
    }
    return up[x][0];
}
void solve()
{
    int n,q;
    cin>>n>>q;
    depth.resize(n+5);
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1,-1);
    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        int lca=LCA(a,b);
        if(lca==a || lca==b)
        {
            cout<<abs(depth[b]-depth[a])<<endl;
        }
        else 
        {
            int dis1=abs(depth[a]-depth[lca]);
            int dis2=abs(depth[b]-depth[lca]);
            cout<<dis1+dis2<<endl;
        }
    }
}
int32_t main()
{
    fastio;
    cout<<fixed<<setprecision(10);
    #ifdef Shivansh
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    auto start = high_resolution_clock::now();
    int t=1;
    //cin>>t;
    int i=1;
    while(i<=t)
    {
        //cout<<"Case #"<<i<<": ";
        solve(); i++;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    #ifdef Shivansh
        cout<<endl<<"Time: "<< (float)duration.count()/1000000<<" s"<<endl;
    #endif
}
