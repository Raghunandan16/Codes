#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, n) for (i = a; i < n; i++)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}

#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif
////////////////////////////////////////CONST////////////////////////////////////////////
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
///////////////////////////////////////FUNCTION//////////////////////////////////////////
int mpow(int base, int exp)
{
    base %= mod;
    int result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}

ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
///////////////////////////////////////////////CODE////////////////////////////////////////////////////////////////////////
bool checkBounds(int r, int c)
{
    if (r >= 1 && r <= 3 && c >= 1 && c <= 3)
        return true;
    if (r == 4 && c == 2)
        return true;
    return false;
}
void solve()
{
    int n, i;
    cin >> n;
    string s;
    cin >> s;
    vpii encoding;
    map<int, pii> phone;
    int num = 1;
    phone[0] = mp(4, 2);
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            phone[num] = mp(i, j);
            num++;
        }
    }
    fo(i, 1, n)
    {
        auto curr = phone[s[i] - '0'];
        auto prev = phone[s[i - 1] - '0'];
        encoding.pb({curr.fi - prev.fi, curr.se - prev.se});
    };
    num = 1;
    int count = 0;
    // Check for zero
    auto curr = phone[0];
    int currx = curr.fi;
    int curry = curr.se;
    bool inBound = true;
    for (auto it : encoding)
    {
        currx += it.fi;
        curry += it.se;
        if (!checkBounds(currx, curry))
        {
            inBound = false;
            break;
        }
    }
    if (inBound)
        count++;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            auto curr = phone[num];
            int currx = curr.fi;
            int curry = curr.se;
            bool inBound = true;
            for (auto it : encoding)
            {
                currx += it.fi;
                curry += it.se;
                if (!checkBounds(currx, curry))
                {
                    inBound = false;
                    break;
                }
            }
            if (inBound)
                count++;
            num++;
        }
        if (count >= 2)
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    /* cin >> t; */
    while (t--)
    {
        solve();
    }

    return 0;
}
