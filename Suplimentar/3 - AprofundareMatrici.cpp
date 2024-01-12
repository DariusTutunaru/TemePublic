#include <iostream>
using namespace std;

int n,m,v[101][101],ok1,ok=0,i,j;

int main() {
    cin>>n>>m;

    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>v[i][j];

    for(j=1;j<=m;j++) {
        ok1 = 1;
        for (i = 2; i <= n; i++)
            if (v[i - 1][j] != v[i][j]) {
                ok1 = 0;
                break;
            }
        if (ok1) {
            cout << j << " ";
            ok = 1;
        }
    }

    if(!ok){
        cout<<"nu exista";
    }
}
