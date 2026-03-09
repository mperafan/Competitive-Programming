#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int main() {
    int n,m,l,r,x;
    cin>>n;
    cin>>m;
    int k[n];
    set <int> s;
    for(int i=1;i<=n;i++){
        s.insert(i);
    }
    for(int i=0;i<m;i++){
        cin>>l;
        cin>>r;
        cin>>x;
        auto it=s.lower_bound(l);
        while(*it<=r&&it!=s.end()){
            if(*it==x){
                k[x-1]=0;
                it++;
            }
            else{
                k[*it-1]=x;
                it = s.erase(it);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<k[i]<<" ";
    }
}