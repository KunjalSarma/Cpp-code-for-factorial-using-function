//Maximum profit by buying and selling a share at most twice
//https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-twice/
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
typedef unordered_map<int, int> umap;
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
	int fmin, smin;
	fmin = smin = INT_MAX;
	int findex = 0, sindex = 0, res = 0;
	REP(i, 0, n) {
		if (arr[i] < fmin) {
			smin = fmin;
			sindex = findex;
			fmin = arr[i];
			findex = i;
		} else if (arr[i] < smin) {
			smin = arr[i];
			sindex = i;
		}
	}
	if (findex < sindex) {
		int max1 = arr[findex];
		int max2 = arr[sindex];
		REP(i, findex, sindex) {
			max1 = max(max1, arr[i]);
		}
		REP(i, sindex, n) {
			max2 = max(max2, arr[i]);
		}
		res = (max1 - fmin) + (max2 - smin);
	} else {
		int max1 = arr[sindex];
		int max2 = arr[findex];
		REP(i, sindex, findex) {
			max1 = max(max1, arr[i]);
		}
		REP(i, findex, n) {
			max2 = max(max2, arr[i]);
		}
		res = (max1 - smin) + (max2 - fmin);
	}
	cout << res;
}
