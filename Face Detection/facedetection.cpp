#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i = (int) a; i < (int) b; i++)
#define forn(i, n) forr(i, 0, n)
typedef long long ll;
const int MAXN = -1;

int n;
int m;

int main() {
	cin>>n>>m;
	char a[n][m];
	for(int i=0;i<n;i++){
		forn(j,m){
			cin>>a[i][j];
		}
	}
	int tot=0;
	for(int i=0;i<n-1;i++){
		forn(j,m-1){
			if(a[i][j]=='f'||a[i][j+1]=='f'||a[i+1][j]=='f'||a[i+1][j+1]=='f'){
				if(a[i][j]=='a'||a[i][j+1]=='a'||a[i+1][j]=='a'||a[i+1][j+1]=='a'){
					if(a[i][j]=='c'||a[i][j+1]=='c'||a[i+1][j]=='c'||a[i+1][j+1]=='c'){
						if(a[i][j]=='e'||a[i][j+1]=='e'||a[i+1][j]=='e'||a[i+1][j+1]=='e'){
								tot++;
						}
					}
				}
			}
		}
	}
	cout<<tot<<endl;
}