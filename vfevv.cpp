#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;
    long long ans = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans += a[i];
        a[i] += i + 1;
    }
    sort(all(a));
    reverse(all(a));
    for (int i = 0; i < k; i++) ans -= a[i];
    for (int i = 0; i < k; i++) {
        ans += n;
        ans -= i;
    }
    cout << ans << "\n";
}

int main() {
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    #endif
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

