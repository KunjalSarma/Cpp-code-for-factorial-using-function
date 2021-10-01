//Find	the	Union	and	Intersection	of	the	two	sorted	arrays.	
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
	int n, m;
	cin >> n >> m;
	int arr1[n];
	int arr2[m];
	REP(i, 0, n) {
		cin >> arr1[i];
	}
	REP(i, 0, m) {
		cin >> arr2[i];
	}
	set<int> s;
	REP(i, 0, n) {
		s.insert(arr1[i]);
	}
	REP(i, 0, m) {
		s.insert(arr2[i]);
	}
	set<int>::iterator itr;
	for (itr = s.begin(); itr != s.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << endl;
	int ins[min(m, n)];
	int i = 0, j = 0, k = 0;
	while (i < n && j < m) {
		if (arr1[i] == arr2[j]) {
			ins[k] = arr1[i];
			i++;
			j++;
			k++;
		} else if (arr1[i] > arr2[j]) {
			i++;
			j++;
		} else {
			i++;
			j++;
		}

	}
	for (int i = 0; i < k; i++) {
		cout << ins[i] << " ";
	}
}
