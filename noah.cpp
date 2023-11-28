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
#define yes cout << "Yes" \
                 << "\n";
#define no cout << "No" \
                << "\n";
template <typename... T>
void readin(T&... args) { ((cin >> args), ...); }

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n, a, b, m, j, k;
    readin(n);

    for(int i = 0; i < n; i++){
       readin(a,b,m);
       bool found = false;
       for(int y = 0; y < m; y++){
            readin(j,k);
            if(sqrt(pow(a-j ,2) + pow(b-k,2)) <= 8){
                if(!found)
                    print("light a candle")
                found = true;
            }
       }
       if(!found)
           print("curse the darkness")
    } 

    return 0;
}
