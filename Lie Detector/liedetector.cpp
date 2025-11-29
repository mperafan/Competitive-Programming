#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define forr(i,a,b) for(int i= (int) a; i < (int)b; i++)
#define forn(i,n) forr(i,0,n)
typedef long long ll;
const int MAXN = -1;
int n;

int main(){
    //freopen("in.txt", "r", stdin);
    cin>>n;
    vector<bool>v;
    forn(i,n){
        string b;
        cin>>b;
        if(b=="TRUTH"){
            v.push_back(true);
        }
        else{
            v.push_back(false);
        }
    }

    //cout<<v.size()<<endl;
    bool tol=v[n-1];
    for(int i=(n-2);i>=0;i--){
        if(tol==true){
            tol=v[i];
        }
        else{
            tol=!v[i];
        }
    }
    if(tol==false){
       cout<<"LIE"<<endl;
    }
    else{
       cout<<"TRUTH"<<endl;
    }
}