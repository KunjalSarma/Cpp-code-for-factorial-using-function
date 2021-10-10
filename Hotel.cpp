#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <time.h>
#include <math.h>
#include <random>
#include <deque>
#include <queue>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <chrono>
#include <cstring>
#include <cstdio>

using namespace std;
 
typedef long long int lli;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef unsigned long long int ull ;
 
#define ll long long int
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii
#define vas()           vector<bool>is_prime(N,true);
#define f()             for(int i=0;i<n;i++)
#define form()          cout<<done<<endl;
#define ull             unsigned long long int
#define pb              push_back
#define makefaster()    (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define all(v) (v).begin(), (v).end()
#define pll pair<lli,lli>
#define prec(n) fixed<<setprecision(n)
#define vc vector<char>
#define ve vector
#define se second
#define fi first
#define pob pop_back
#define psf push_front
#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)
#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
#define inf 1e18
#define mod 998244353
#define M 1000000007


int main()
{

    int i, j, k;
    int n, m;
    string s, ans;

    sf(n);
    cin >> s;

    set<int> room;
    for(i = 0; i < 10; i++)
        ans.pb('0'), room.insert(i);

    for(i = 0; i < n; i++)
    {
        if(s[i] == 'L')
            k = *room.begin(), room.erase(k), ans[k] = '1';

        else if(s[i] == 'R')
            k = *room.rbegin(), room.erase(k), ans[k] = '1';

        else
        {
            k = s[i] - 48;
            ans[k] = '0';
            room.insert(k);
        }
    }

    cout << ans;

    return 0;
}
