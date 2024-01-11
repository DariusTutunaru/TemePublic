
// problema 6

#include <iostream>
using namespace std;

int n,m,v[101][101],i,j,ok;

int main() {
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>v[i][j];

    for(i=1;i<=n;i++){
        ok=1;
        for(j=2;j<=m;j++)
            if(v[i][j]!=v[i][j-1]){
                ok=0;
                break;
            }
        if(ok)
            cout<<i<<" "<<v[i][1]<<endl;
    }



}
