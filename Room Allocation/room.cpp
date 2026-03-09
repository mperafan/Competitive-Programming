#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int n;

int main() {
    cin>>n;
    int ans[n];
    vector <pair<pair<int, int>,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first.first;
        cin>>v[i].first.second;
        v[i].second=i;
        }
    sort(v.begin(),v.end());
    int lasthab=0;
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<n;i++){
        if(pq.empty()){
            lasthab++;
            pq.push(make_pair(-v[i].first.second,lasthab));
            ans[v[i].second]=lasthab;
        }
        else{
            pair<int, int> last=pq.top();
            if(v[i].first.first>-last.first){
                pq.pop();
                pq.push(make_pair(-v[i].first.second,last.second));
                ans[v[i].second]=last.second;
            }
            else{
                lasthab++;
                pq.push(make_pair(-v[i].first.second,lasthab));
                ans[v[i].second]=lasthab;
            }
        }
    }
    cout<<lasthab<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}


