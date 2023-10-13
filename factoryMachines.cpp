#include <bits/stdc++.h>
#include <cmath>
using namespace std;

typedef unsigned long long ll;
typedef pair<int, int> pii;
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
#define print(x) cout << x << "\n";
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
    ll n,t;
    readin(n,t);
    
    vector<ll> a;
    for(ll i = 0; i < n; i++){
        ll b;
        readin(b);
        a.push_back(b);
    }
    ll low = 0;
    ll high = (ll) 1e18 + 2;
    ll mid, numToys;

    while (high-low > 0){
        mid = (high/2 + low/2) + ((high&1 && low&1) ? 1 : 0);

        numToys = 0;
        foreach(d, a){
            numToys += mid/d;
        }
        if(numToys >= t){
            high = mid; 
        }
        else {
            low = mid + 1;
        }
    }

    print(low);
        

    return 0;
}
