#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;
int n;

int main() {
    scanf("%d",&n);
    set<int> s;
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int y,k;
        scanf("%d",&y);
        scanf("%d",&k);
        if(y==1){
            s.insert(k);
        }
        if(y==2){
            auto it=s.lower_bound(k);
            if(it!=s.end()){
                printf("%d\n",*it);
            }
            else{
                printf("-1\n");
            }
        }
    }
}