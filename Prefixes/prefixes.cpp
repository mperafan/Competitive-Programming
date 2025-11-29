#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;
const int INF = 1e9 + 5;

vector <pair<string,int>> v;
int n;
int m;
int k;
unordered_multiset <int> s;

int main() {
    cin>>n;
    string w;
    cin>>w;
    int tot=0;
    forn(i,n){
        if(w[i]==w[i+1]){
            if(w[i]=='a'){
                w[i]='b';
                tot++;
            }
            else{
                w[i]='a';
                tot++;
            }
            //cout<<w<<endl;
        }
        i++;
    }
    cout<<tot<<endl;
    cout<<w<<endl;
}