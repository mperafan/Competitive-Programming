#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;
int n;

int main(){
    int t;
    cin>>t;
    int a,b,c;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(a+b==c||a+c==b||c+b==a){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;

}