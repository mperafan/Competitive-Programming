#include <bits/stdc++.h>
using namespace std;
#include <map>
#define forr(i,a,b) for(int i = (int) a; i < (int) b; i++)
#define forn(i,n) forr(i,0,n)
typedef long long ll;
const int MAXN = 100000+100;
const int MAXM = 100000+100;
int n;
int m;
priority_queue<pair<ll,int>> pq;
vector<int> v[MAXN];
bool calculado[MAXN];
ll costo[MAXN];

pair<int,int> dfs(int u,bool viene){
    if(calculado[u]) return{0,0};
    calculado[u]=true;
    ll value=0;
    int cant=1;
    if(!viene) value=costo[u];
    for(auto it:v[u]){
        pair <ll,int>v=dfs(it,true);
        value=value+v.first;
        cant+=v.second;
    }
    return {value,cant};
}


int main(){
   // freopen("in.txt", "r", stdin);
    cin>>n>>m;
    forn(i, n){
        ll b;
        cin>>b;
        costo[i]=b;
        pq.push({-b,i});
    }
    forn(i,m){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int cant=0;
    ll value=0;
    while(cant<n){
        pair<ll,int>u=pq.top();pq.pop();
        pair<ll,int>v=dfs(u.second,false);
        cant=cant+v.second;
        value=value+v.first;
        //cout<<cant<<endl;
    }
    cout<<value<<endl;

}