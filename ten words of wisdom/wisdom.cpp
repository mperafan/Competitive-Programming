#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int n;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        priority_queue<pair<int,int>> pq;
        for(int j=0;j<n;j++){
            int l;
            int q;
            cin>>l>>q;
            if(l<=10){
                pq.push({q,j+1});
            }
        }
        cout<<pq.top().second<<endl;
    }
}