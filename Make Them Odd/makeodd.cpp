#include <bits/stdc++.h>
using namespace std;
#include <queue>
#define forr(i,a,b) for(int i = (int) a;i <(int) b; i++)
#define forn(i,n) forr(i,0,n)
typedef long long ll;
const int MAXN = -1;

int n;
int m;

int main(){
    int t;
    cin>>t;
    forn(i,t){
        cin>>n;
        priority_queue<ll> pq;
        forn(j,n){
            int b;
            cin>>b;
            if(b%2==0){
                pq.push(b);
            }
        }
        ll k=-1;
        int pasos=0;

        while(!pq.empty()){
            ll d;
            d=pq.top();pq.pop();
            if(k==-1){
                k=d;
                pasos++;
            }
            if(d!=k){
                pasos++;
                k=d;
            }
            d=d/2;
            if(d%2 == 0){
                pq.push(d);
            }

        }
        cout<<pasos<<endl;
    }
}