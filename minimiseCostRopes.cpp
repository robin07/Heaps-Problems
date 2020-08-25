Ques: Minimize the cost of ropes

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


int minCost(minH h) {
	int cost = 0;
	while (h.size() >= 2) {
		int a = h.top();
		h.pop();
		int b = h.top();
		h.pop();
		cost += (a + b);
		h.push(a + b);
	}
	return cost;
}

int main() {
#ifndef ONLINE_JUDGE
	//for reading input from input.txt
	freopen("input3.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output3.txt", "w", stdout);
#endif

	fast_io;
	inp(tc) {
		ll n;
		cin >> n;
		minH pq;
		for (int i = 0; i < n; i++) {
			ll a; cin >> a;
			pq.push(a);
		};
		cout << minCost(pq) << "\n";
	}
}
