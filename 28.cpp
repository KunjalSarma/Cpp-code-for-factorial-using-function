//Print	the	matrix	in	a	Spiral	manner. [Very	IMP	]
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
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	REP(i, 0, n) {
		REP(j, 0, m) {
			cin >> arr[i][j];
		}
	}
	REP(i, 0, n) {
		REP(j, 0, m) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int row_start = 0, column_start = 0, row_end = n - 1, column_end = m - 1;
	while (row_start <= row_end && column_start <= column_end) {
		for (int col = column_start; col <= column_end; col++) {
			cout << arr[row_start][col] << " ";
		}
		row_start++;
		for (int row = row_start; row <= row_end; row++) {
			cout << arr[row][column_end] << " ";
		}
		column_end--;
		if (row_start <= row_end) {
			for (int col = column_end; col >= column_start; col--) {
				cout << arr[row_end][col] << " ";
			}
		}

		row_end--;
		if (column_start <= column_end) {
			for (int row = row_end; row >= row_start; row--) {
				cout << arr[row][column_start] << " ";
			}
		}

		column_start++;
	}

}
