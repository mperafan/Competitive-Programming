#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int n;

int main() {
	unordered_map<string,string> m;
	m["purple"]="Power";
	m["green"]="Time";
	m["blue"]="Space";
	m["orange"]="Soul";
	m["red"]="Reality";
	m["yellow"]="Mind";
	cin>>n;
	forn(i,n){
		string buffer;
		cin>>buffer;
		m.erase(buffer);
	}
	cout<<6-n<<endl;
	for(auto it:m){
		cout<<it.second<<endl;
	}
}