using namespace std;
#include <iostream>

int main(){
    int suma[3]={0,0,0};
    int n;
    cin>>n;
    int vector[n][3];
    for(int i=0;i<n;i++){
        cin>>vector[i][0]>>vector[i][1]>>vector[i][2];
        suma[0]=suma[0]+vector[i][0];
        suma[1]=suma[1]+vector[i][1];
        suma[2]=suma[2]+vector[i][2];
    }
    if(suma[0]==0&&suma[1]==0&&suma[2]==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}