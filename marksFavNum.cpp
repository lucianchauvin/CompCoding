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

    int high = 1000, low = 1, mid;
    string status;
    
    cout << (low+high)/2 << "\n";
    readin(status);

    while(status != "correct"){
        mid = (low+high)/2;
        if (status == "lower")
            high = mid - 1;
        else{
            low = mid + 1;
        }
        cout << (low+high)/2 << "\n";
        readin(status);
    }


    return 0;
}
