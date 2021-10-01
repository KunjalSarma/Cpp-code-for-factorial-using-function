//Find	the	first	non-repeating	element	in	a	given	array	of	integers.	
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
	unordered_map<int, int>m;
	REP(i, 0, n) {
		m[arr[i]]++;
	}
	REP(i, 0, n) {
		if (m[arr[i]] == 1) {
			cout << arr[i];
			break;
		}
	}



}
