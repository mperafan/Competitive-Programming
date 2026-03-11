#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
//const int MAXN;

int main (){
    string n;
    cin>>n;
    string nn=n;
    //cout<<nn;
    bool b=1;
    forn(i,n.length()){
        if(nn[i]>96 && i==0){
            nn[i]=nn[i]-32;
        }
        else{
            if(nn[i]<97){
                nn[i]=nn[i]+32;
            }
            else{
                cout<<n;
                b=0;
                break;
            }
        }
    }
    if(b){
        cout<<nn;
    }
    return 0;
}