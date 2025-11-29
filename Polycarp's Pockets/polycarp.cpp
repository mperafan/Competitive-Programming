#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define forr(i,a,b) for(int i= (int) a; i < (int)b; i++)
#define forn(i,n) forr(i,0,n)
typedef long long ll;
const int MAXN = -1;
int n;

int main(){
   // freopen("in.txt", "r", stdin);
    cin>>n;
    int tot=0;
    map<int,int> m;
    forn(i,100){
        m[i]=0;
    }
    forn(i,n){
        int b;
        cin>>b;
        b--;
        m[b]+=1;
        if(m[b]>tot){
            tot=m[b];
        }
    }
    cout<<tot;
}