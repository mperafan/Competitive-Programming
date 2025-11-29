#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = 110;

int n;
int m;
int k;


int main() {
    cin>>n;
    vector <int> v;
    forn(i,n){
        int b;
        cin>>b;
        v.push_back(b);
    }
    sort(v.rbegin(),v.rend());
    if(v[0]-25<0){
        cout<<0;
    }
    else{
        cout<<v[0]-25;
    }
}
