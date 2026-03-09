#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int main() {
    unordered_map<string,ll> m;
    string buffer;
    ll intbuffer;
    int q,k;
    cin>>q>>k;
    for(int i=0;i<q;i++){
        cin>>buffer;
        cin>>intbuffer;
        if(m.count(buffer)){
            m[buffer]=m[buffer]+intbuffer;
        }
        else{
            m[buffer]=intbuffer;
        }
    }
    vector <pair<ll,string>> v;
    for (auto it:m){
        v.push_back({it.second,it.first});
    }
    sort(v.rbegin(),v.rend());
    ll dineroahorrado=0;
    for(auto it:v){
        if(k==0){
            break;
        }
        if(it == v.back()){
            dineroahorrado=dineroahorrado + it.first;
            break;
        }
        dineroahorrado=dineroahorrado + it.first;
        k--;
    }
    cout<<dineroahorrado<<endl;
}
