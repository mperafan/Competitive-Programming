#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = 10000;
int n;
char vn[MAXN][3][3];

void solve(int n){
    for(int i=0;i<3;i++){
        if(vn[n][i][0]!='.'&&vn[n][i][0]==vn[n][i][1]&&vn[n][i][0]==vn[n][i][2]){
            cout<<vn[n][i][0]<<endl;
            return;
        }
    }
    for(int i=0;i<3;i++){
        if(vn[n][0][i]!='.'&&vn[n][0][i]==vn[n][1][i]&&vn[n][0][i]==vn[n][2][i]){
            cout<<vn[n][0][i]<<endl;
            return;
        }
    }
    if(vn[n][1][1]!='.'&&vn[n][1][1]==vn[n][0][2]&&vn[n][1][1]==vn[n][2][0]){
        cout<<vn[n][1][1]<<endl;
        return;
    }
    if(vn[n][1][1]!='.'&&vn[n][1][1]==vn[n][0][0]&&vn[n][1][1]==vn[n][2][2]){
        cout<<vn[n][1][1]<<endl;
        return;
    }
    cout<<"DRAW"<<endl;
    return;

}

int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                cin>>vn[i][j][k];
            }
        }
    }
    for(int i=0;i<n;i++){
        solve(i);
    }

}