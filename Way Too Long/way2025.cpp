using namespace std;
#include<iostream>
#include <stdio.h>
#include <string>

int main (){
    int n;
    cin>>n;
    string w[n];
    for(int i=0;i<n;i++){
        cin>>w[i];
    };
    for(int i=0;i<n;i++){
        int l=w[i].length();
        if(l>10){
            cout<<w[i][0]<<l-2<<w[i][l-1]<<'\n';
        }
        else{
            cout<<w[i]<<'\n';
        }
    }
    return 0;
}