#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define fr(i, n) for (int i = 0; i < n; i++)
#define fr1(i, n) for (int i = 1; i <= n; i++)
#define pb(x) push_back(x)
#define l(s) s.size()
#define as(a) sort(a, a + n)
#define ds(a) sort(a, a + n, greater<int>())
#define vas(v) sort(v.begin(), v.end());
#define inf 1e18
#define nl cout << endl;
#define F first
#define S second
typedef vector<int> vi;
typedef pair<int, int> pi;

int infi = 1000000007;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int max_a = INT_MIN, max_b = INT_MIN;
        int a;
        fr(i,k1){
            cin>>a;
            max_a = max(max_a,a);
        }
        fr(i,k2){
            cin>>a;
            max_b = max(max_b,a);
        }
        if(max_a > max_b){
            cout<<"YES";
            nl
        }else{
            cout<<"NO";
            nl
        }
    }
    return 0;
}