//Given	an	array	of	size	n	and	a	number	k,	fin	all	elements	that	appear	
//more	than	n/k	times.
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
typedef unordered_map<int, int> um;
void inputarr(int arr[], int n) {
	REP(i, 0, n) {
		cin >> arr[i];
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int k;
	cin >> n >> k;
	int arr[n];
	inputarr(arr, n);
	int x = n / k;
	um m1;
	REP(i, 0, n) {
		m1[arr[i]]++;
	}
	for (auto itr = m1.begin(); itr != m1.end(); itr++) {
		if (itr->s > x)
			cout << itr->f << " ";
	}
}
