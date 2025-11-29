    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        string word;
        int n;
        int largow;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>word;
            largow=word.length();
            if(largow>10){
                cout<<word[0]<<largow-2<<word[largow-1]<<"\n";
            }
            else{
                cout<<word<<"\n";
            }
        }
    }