#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int n;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a[3];
        cin>>a[0];
        cin>>a[1];
        cin>>a[2];
        if(a[0]+a[1]>=10||a[0]+a[2]>=10||a[1]+a[2]>=10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}