#include <bits/stdc++.h>
using namespace std;
//You	are	given	a	list	of	n-1	integers	and	these	integers	are	in	the	range	
//of	1	to	n.	There	are	no	duplicates	in	the	list.	One	of	the	integers	is	
//missing	in	the	list.	Write	an	efficient	code	to	find	the	missing	integer.	
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
	int sum = (n * (n + 1)) / 2;
	int sum2 = 0;
	for (int i = 0; i < n - 1; i++) {
		sum2 += arr[i];
	}
	cout << sum - sum2;
}
