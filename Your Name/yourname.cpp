using namespace std;
#include <iostream>;
#include <map>;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string w,nw;
        cin>>w>>nw;
        map <char, int> m;
        for(int j=0;j<n;j++){
            if(m.find(w[j])== m.end()){
                m[w[j]]=1;
            }
            else{
                m[w[j]]++;
            }
        }
        bool print=1;
        for(int j=0; j<n;j++){
            if(m[nw[j]]>0){
                m[nw[j]]--;
            }
            else{
                print=0;
                break;
            }
        }
        if(print){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    
}