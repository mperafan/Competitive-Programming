#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int main() {
    string n;
    cin>>n;
    string word="hello";
    string w="";
    int j=0;
    int i=0;
    while(j<word.length()&&i<n.length()){
        if(n[i]==word[j]){
            w=w+word[j];
            j++;
        }
        i++;
    }
    if(word==w){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
}