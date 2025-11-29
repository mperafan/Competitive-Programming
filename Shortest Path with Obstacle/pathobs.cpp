#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;
vector <pair<string,int>> v;
int n;
int m;
int k;
multiset <int> s;

int main() {
    int t;
    cin>>t;
    forn(i,t){
        int ax,ay,bx,by,fx,fy;
        cin>>ax>>ay>>bx>>by>>fx>>fy;
        int tot=0;
        if(((ax==fx&&bx==fx)&&((ay>fy&&by<fy)||(ay<fy&&by>fy)))||(ay==fy&&by==fy)&&((ax>fx&&bx<fx)||(ax<fx&&bx>fx))){
            tot=2;
        }
        tot=tot+(max(ax,bx)-min(ax,bx))+(max(by,ay)-min(by,ay));
        cout<<tot<<endl;
    }


}