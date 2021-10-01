//Given	an	array	with	all	distinct	elements,	find	the	largest	three	
//elements.	Expected	time	complexity	is	O(n)	and	extra	space	is	O(1).
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
	int first, second, third;
	third = first = second = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > first)
		{
			third = second;
			second = first;
			first = arr[i];
		}
		else if (arr[i] > second)
		{
			third = second;
			second = arr[i];
		}

		else if (arr[i] > third)
			third = arr[i];
	}
	cout << first << " " << second << " " << third;
}
