//Find	the	minimum	element	in	a	rotated	and	sorted	array.
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
void inputarr(int arr[], int n) {
	REP(i, 0, n) {
		cin >> arr[i];
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int arr[n];
	inputarr(arr, n);
	int l = 0, h = n - 1, m = 0;
	while (l <= h) {
		m = (l + h) / 2;
		if (arr[m] < arr[m - 1])
			break;
		else if (arr[m] < arr[h]) {
			h = m - 1;
		} else {
			l = m + 1;
		}
	}
	if (l == 0 && h == 0)
		cout << arr[0];
	else
		cout << arr[m];
}
