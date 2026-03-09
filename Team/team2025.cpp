using namespace std;
#include <iostream>

int main(){
    int n;
    int p[3];
    cin>>n;
    int ps=0;
    for(int i=0;i<n;i++){
        int q=0;
        for(int j=0;j<3;j++){
            cin>>p[j];
            if(p[j]==1){
                q++;
            }
        }
        if(q>1){
            ps++;
        }
    }
    cout<<ps;
}