
// problema 7

#include <iostream>
using namespace std;

int n,m,v[101][101],i,j,ok,nr=0;

int main() {
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>v[i][j];

    for(j=2;j<=m;j++){
        ok=1;
        for(i=1;i<=n;i++) {
            if (v[i][j] == v[i][1]) {
                ok = 0;
                break;
            }
        }
        nr+=ok;
    }
    cout<<nr;



}
