#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string alf;
        cin>>alf;
        map <char,string> m;
        for(int j=0;j<alf.size();j++){
            string b;
            b="" + to_string(j);
            m[alf[j]]=b;
        }
        int l;
        cin>>l;
        vector<pair<string,string>> v(l);
        for(int j=0;j<l;j++){
            cin>>v[j].second;
            v[j].first="";
            for(int k=0;k<v[j].second.size();k++){
                v[j].first=v[j].first + m[v[j].second[k]];
            }
        }
        sort(v.begin(),v.end());
        for(int j=0;j<l;j++){
            cout<<v[j].second<<endl;
        }
    }
}
