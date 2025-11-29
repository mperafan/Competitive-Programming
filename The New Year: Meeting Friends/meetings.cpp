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
    int p1;
    int p2;
    int p3;
    cin>>p1>>p2>>p3;
    int a1,a2,a3;
    a1=abs(p1-p2)+abs(p1-p3);
    a2=abs(p2-p1)+abs(p2-p3);
    a3=abs(p3-p1)+abs(p3-p2);
    cout<<min(min(a1,a2),a3)<<endl;
}
