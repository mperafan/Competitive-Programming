#include <bits/stdc++.h>
using namespace std;
#include <queue>
#define forr(i,a,b) for(int i = (int) a;i <(int) b; i++)
#define forn(i,n) forr(i,0,n)
typedef long long ll;
const int MAXN = -1;

int n;
int m;
priority_queue <pair < int ,int > > pq;

int main(){
    cin>>n;
    forn(i,n){
    int a,b;
    cin>>a>>b;
    pq.push({b,a});
    }
    bool c=true;
    int k =pq.top().first;
    int suma=pq.top().second;
    pq.pop();
    while(k!=0&&!pq.empty()){
        k--;
        pair<int,int> d=pq.top();pq.pop();
        k=k+d.first;
        suma=suma+d.second;
    }
    cout<<suma<<endl;
}