
// problema 5

#include <iostream>
using namespace std;

int n,x,v[101][101],i,j,nr=0;

int main() {
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>v[i][j];
    cin>>x;

    for(j=1;j<=n;j++) {
        if (v[1][j] % x == 0) // prima linie
            nr++;
        if (v[n][j] % x == 0) // ultima linie
            nr++;
    }
    for(i=2;i<n;i++) {
        if (v[i][1] % x == 0) //prima coloana
            nr++;
        if (v[i][n] % x == 0) //ultima coloana
            nr++;
    }
    cout<<nr;



}
