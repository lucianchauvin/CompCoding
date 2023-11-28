#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<pii> vii;
typedef vector<int> vi;
typedef vector<string> vs;

#define dbg(x) cout << "==DEBUG==  " << #x << " = " << x << "\n";
#define dbgv(x)                           \
    cout << "==DEBUG==  " << #x << " = "; \
    for (auto i : x) cout << i << " ";    \
    cout << "\n";
#define sum(x) accumulate(x.begin(), x.end(), 0)
#define sortLG(x) sort(x.begin(), x.end(), less<int>()); return x; 
#define sortGL(x) sort(x.begin(), x.end(), greater<int>())
#define reverse(x) reverse(x.begin(), x.end())
#define foreach(i, x) for (auto i : x)
#define print(x) cout << x << endl;
#define printall(x)                    \
    for (auto i : x) cout << i << " "; \
    cout << "\n";
#define yes cout << "Yes" \
                 << "\n";
#define no cout << "No" \
                << "\n";
template <typename... T>
void readin(T&... args) { ((cin >> args), ...); }

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin >> a >> b;
    
    vector<long long> v,s;
    ll sum = 0;
    for(ll i = 0; i < a; i++){
       ll m;
       cin >> m;
       v.push_back(m);
       sum += m;
       s.push_back(sum);
    }
    for(ll j = 0; j < b; j++){
        ll c,d;
        cin >> c >> d;
        cout << s.at(d-1)- ((c > 1) ? s.at(c-2) : 0) << endl;
    }

    return 0;
}
