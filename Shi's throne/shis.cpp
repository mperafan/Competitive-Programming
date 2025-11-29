#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int n;
int m;

int main() {
	vector<int> v;
	cin>>n>>m;
	forn(i,n){
		int b;
		cin>>b;
		v.push_back(b);
	}
	sort(v.rbegin(),v.rend());
	cout<<v[n-m]<<endl;
}