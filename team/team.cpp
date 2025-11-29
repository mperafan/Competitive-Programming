    #include <bits/stdc++.h>
    using namespace std;
    #define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
    #define forn(i, n) forr(i, 0, n)
    typedef long long ll;
    const int MAXN = -1;
     
    int n;
     
    int main(){
        int contp=0;
        int contv=0;
        string p;
        cin>>n;
        for(int i=0;i<=n;i++){
            getline(cin,p);
            if(p[0]==49){
                contv++;
            }
            if(p[2]==49){
                contv++;
            }
            if(p[4]==49){
                contv++;
            }
            if(contv>1){
                contp++;
            }
            contv=0;
        }
        cout<<contp;
    }