    #include <bits/stdc++.h>
    #include <string>
    #include <sstream>
    using namespace std;
    #define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
    #define forn(i, n) forr(i, 0, n)
    typedef long long ll;
    const int MAXN = -1;

    int main() {
      //  freopen("in.txt","r",stdin);
      string w;
      cin>>w;
      int n;
      n=w.size();
      int tot=0;
      forn(i,n-2){
        if(w[i]!='Q')continue;
        forr(j,i+1,n-1){
            if(w[j]=='A'){
                forr(k,j+1,n){
                    if(w[k]=='Q'){
                        tot++;
                    }
                }
            }
        }
      }
      cout<<tot<<endl;
    }