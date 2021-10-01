#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007
//Find	all	pairs	on	integer	array	whose	sum	is	equal	to	given	number.
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int arr[n];
	REP(i, 0, n) {
		cin >> arr[i];
	}
	int ctr = 0;
	unordered_map<int, int> m;
	REP(i, 0, n) {
		m[arr[i]]++;
	}
	REP(i, 0, n) {
		ctr += m[k - arr[i]];
		// cout << i << " " << k - arr[i] << " " << ctr << " ";
		if (k - arr[i] == arr[i])
			ctr--;
		// cout << ctr << endl;
	}
	cout << ctr / 2;
}
