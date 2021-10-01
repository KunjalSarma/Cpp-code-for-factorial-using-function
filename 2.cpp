//Write	a	program	to	cyclically	rotate	an	array	by	one.	
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
	int temp = arr[0];
	REP(i, 1, n) {
		arr[i - 1] = arr[i];
	}
	arr[n - 1] = temp;
	REP(i, 0, n) {
		cout << arr[i] << " ";
	}
}
