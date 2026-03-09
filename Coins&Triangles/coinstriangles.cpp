#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int n;

int main() {
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        int cant=0;
        for(int i=1;i<=m;i++){
            m=m-i;
            if(m>=0){
                cant++;
            }
        }
        cout<<cant<<endl;
    }
}
