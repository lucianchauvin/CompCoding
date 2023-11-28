#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
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
#define print(x) cout << x << endl;
#define printall(x)                    \
    for (auto i : x) cout << i << " "; \
    cout << "\n";
#define yes cout << "YES" \
                 << "\n";
#define no cout << "NO" \
                << "\n";
template <typename... T>
void readin(T&... args) { ((cin >> args), ...); }

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    readin(t);

    for(int i = 0; i < t; i++){
       ll n = 0, s = 0, a = 0;
       readin(n);
        for(int k = 0; k < n; k++){
           readin(a);
           s += a;
           s %= n;
        }
        if(s%n == 0){
            yes
        }
        else 
            no;

    } 

    return 0;
}
