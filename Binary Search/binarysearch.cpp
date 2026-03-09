#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int n;

int busqueda_binaria(int min, int max, int num, int lista[]){
    int med=(min+max)/2;
    if(lista[med]==num){
        return med;
    }
    else{
        if(num<lista[med]){
            max=med;
        }
        if(num>lista[med]){
            min=med;
        }
        }
    if(min+1==max){
        if(num==lista[min]){
            return min;
        }
        if(num==lista[max]){
            return max;
        }
        else{
            return -1;
        }
        }
    return busqueda_binaria(min,max,num,lista);
}


int main() {
    int N, Q;
    cin>>N>>Q;
    int lista[N];
    for(int i=0;i<N;i++){
        cin>>lista[i];
    }
    int query;
    for(int i=0;i<Q;i++){
        cin>>query;
        cout<<busqueda_binaria(0,N-1,query,lista)<<"\n";
    }
}
