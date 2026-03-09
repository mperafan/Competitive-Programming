using namespace std;
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstdio> 

int main(){
    char b='.';
    long long num;
    cin>>num;
    if(num==0){
        cout<<"NO";
        return 0;
    }
    int ln=0;
    while(num>0){
        int dig=num%10;
        if(dig==7 || dig==4){
            ln++;
        }
        num=num/10;
    }
    if(ln==0){
        cout<<"NO";
        return 0;
    }
    bool ans=1;
    while(ln>0){
        int dig=ln%10;
        if(dig!=7 && dig!=4){
            ans=0;
            break;
        }
        ln=ln/10;
    }
    if(ans){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}