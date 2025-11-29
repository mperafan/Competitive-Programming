#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int n;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string word="";
        for(int j=0;j<8*8;j++){
            char c;
            cin>>c;
            if(c!='.'){
                word=word+c;
            }
        }
        cout<<word<<endl;
    }
}