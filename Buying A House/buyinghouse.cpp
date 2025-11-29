#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = 110;
vector<int> ve[MAXN];
bool visitado[MAXN];
int distancia[MAXN];



int n;
int m;
int k;


int solve(int n, int precio[], int k){
    queue<int> b;
    b.push(n);
    visitado[n] = true;
    distancia[n] = 0;
    while (not b.empty()) {
        int u = b.front(); b.pop();

        if(precio[u] <= k && precio[u] > 0) {
            return distancia[u]*10;
        }

        for(int v: ve[u]) if(!visitado[v]) {
            b.push(v);
            visitado[v] = true;
            distancia[v] = distancia[u] + 1;
        }
    }
}


int main() {
    cin>>n>>m>>k;
    int precio[n];
    for(int i=0;i<n;i++){
        cin>>precio[i];
    }
    for(int i = 0; i < n-1; i++){
        ve[i].push_back(i+1);
        ve[i+1].push_back(i);
    }
    cout<<solve(m - 1,precio,k)<<endl;
}