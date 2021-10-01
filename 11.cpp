//Rearrange	the	array	in	alternating	positive	and	negative	items	with	
//O(1)	extra	space.
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
	//Algo1-O(n^2)

	// REP(i, 0, n) {
	// 	int j = i + 1;
	// 	if (i % 2 == 0 && arr[i] < 0) {
	// 		while (arr[j] < 0 && j < n) {j++;}
	// 		if (arr[j] >= 0)
	// 			swap(arr[i], arr[j]);
	// 	} else if (i % 2 != 0 && arr[i] >= 0) {
	// 		while (arr[j] >= 0 && j < n) {j++;}
	// 		if (arr[j] < 0)
	// 			swap(arr[i], arr[j]);
	// 	}
	// }

	//Algo2-O(n)
	int i = 0, j = n - 1;
	while (i < j) {
		while (arr[i] >= 0)i++;
		while (arr[j] < 0)j--;
		if (i < j)
			swap(arr[i], arr[j]);
	}
	//i has the index of leftmost -ve element
	int k = 0;
	while (i < n && k < n) {
		swap(arr[i], arr[k]);
		i++;
		k += 2;
	}
	REP(i, 0, n) {
		cout << arr[i] << " ";
	}
}
