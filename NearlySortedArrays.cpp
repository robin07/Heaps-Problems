Ques: Sort K sorted arrays

//APPROACH
/*
Basically make a minHeap and start traversing given array push elements onto heap,
if size of heap becomes greater than K then pop the top element and push that element into vector,
and lastly push all remaining elements of heap into Vector.

This can be done via Sorting but we used this approach so to reduce time complexity because sorting implementation takes O(nlogn) time whereas this approach takes O(nlogk).
*/

Code:-

//evolvedghost

#include<bits/stdc++.h>
using namespace std;

#define fi              first
#define se              second
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define pai             pair<ll,ll>
#define vi              vector<ll>
#define mpi             map<ll,ll>
#define maxH            priority_queue<ll>
#define minH            priority_queue<ll,vector<ll>,greater<ll>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inp(tc)         int tc; cin>>tc; while(tc--)
#define fast_io         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


int main() {
#ifndef ONLINE_JUDGE
	//for reading input from input3.txt
	freopen("input3.txt", "r", stdin);
	//for writing output to output3.txt
	freopen("output3.txt", "w", stdout);
#endif

	fast_io;
	inp(tc) {
		ll n, k;
		cin >> n >> k;
		vi inp, out;
		minH hp;
		for (int i = 0; i < n; i++) {
			ll a; cin >> a;
			inp.pb(a);
			hp.push(a);
			if (hp.size() > k) {
				ll x = hp.top();
				out.pb(x);
				hp.pop();
			}
		}
		while (!hp.empty()) {
			ll y = hp.top();
			out.pb(y);
			hp.pop();
		}
		for (auto x : out) {
			cout << x << " ";
		} cout << "\n";
	}
}

