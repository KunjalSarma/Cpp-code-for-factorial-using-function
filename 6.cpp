//Sort	an	Array	using	Quicksort	algorithm
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
int partition(int arr[], int start, int end) {
	int pivot = arr[end - 1];
	int pindex = start;
	for (int i = start; i < end - 1; i++) {
		if (arr[i] <= pivot) {
			swap(arr[i], arr[pindex++]);
		}

	}
	swap(arr[pindex], arr[end - 1]);
	return pindex;
}
void quicksort(int arr[], int start, int end) {
	if (start < end) {
		int pi = partition(arr, start, end);
		quicksort(arr, start, pi - 1);
		quicksort(arr, pi + 1, end);
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int arr[8] {7, 2, 1, 6, 8, 5, 3, 4};
	cout << partition(arr, 0, 8	) << endl;
	quicksort(arr, 0, 8);
	for (auto a : arr) {
		cout << a << " ";
	}

}
