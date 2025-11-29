#include <bits/stdc++.h>
using namespace std;
#include <map>
#define forr(i,a,b) for(int i = (int) a; i < (int) b; i++)
#define forn(i,n) forr(i,0,n)
typedef long long ll;
const int MAXN = 3*100000+250;
const int MAXM = min(3*100000+250,(MAXN*(MAXN-1))/2);
int n;
int m;
vector<int> v[MAXN];
bool color[MAXN];
int enemy[MAXN];
bool calculado[MAXN];

void dfs(int u){
   // cout<<"visito el nodo: "<<u+1<<endl;
    if(calculado[u])return;
    calculado[u]=true;
    for(auto it:v[u]){
        if(enemy[u]==-1&&enemy[it]==-1){
            enemy[u]=it;
            enemy[it]=u;
            color[it]=color[u];
        }
        else{
            color[it]=!color[u];
        }
        dfs(it);
    }
}

int main(){
  //  freopen("in.txt", "r", stdin);
    string w;
    cin>>w;
    map<char,int> m;
    int l=97;
    forn(i,27){
        if(i==0){
            i++;
        }
        m[char(l)]=i;
        l++;
    }
    //for(auto it:m){
      //  cout<<it.first<<" y "<<it.second<<endl;
    //}
    string nw="";
    int tot=0;
    int a=97;
    forn(i,w.size()){
        if(abs(m[a]-m[w[i]])==13){
            tot=tot+13;
        }
        else{
            if(m[a]<m[w[i]]){
               if(m[w[i]]-m[a]>13){
                    tot=tot+abs(m[a]+26-m[w[i]]);
                }
                if(m[w[i]]-m[a]<13){
                    tot=tot+m[w[i]]-m[a];
                }
            }
            if(m[a]>m[w[i]]){
                if(m[a]-m[w[i]]>13){
                    tot=tot+abs(m[w[i]]+26-m[a]);
                }
                if(m[a]-m[w[i]]<13){
                    tot=tot+m[a]-m[w[i]];
                }
            }
        }
        a=int(w[i]);
        //cout<<tot<<endl;
    }
    cout<<tot<<endl;

}