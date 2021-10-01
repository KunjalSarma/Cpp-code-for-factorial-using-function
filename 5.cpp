//Find duplicates in an array
#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	REP(i, 0, n) {
		cin >> arr[i];
	}
	map<int, int> m;
	REP(i, 0, n) {
		m[arr[i]]++;
	}
	vi a;
	for (auto itr = m.begin(); itr != m.end(); itr++) {
		if (itr->second > 1)
			a.pb(itr->first);
	}
	if (a.size() == 0)
		cout << -1;
	else {
		REP(i, 0, a.size()) {
			cout << a[i] << " ";
		}
	}

}
