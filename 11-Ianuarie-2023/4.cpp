
// problema 4

#include <iostream>
using namespace std;

int n,v[100][100],i,j;

int main() {
    cin>>n;
    for(j=0;j<n;j++)
        cin>>v[0][j];

    for(i=1;i<=n-1;i++){
        for(j=0;j<=n-2;j++)
            v[i][j]=v[i-1][j+1];
        v[i][n-1]=v[i-1][0];
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }

}
