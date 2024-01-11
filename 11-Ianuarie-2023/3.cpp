
// problema 3

#include <iostream>
using namespace std;

int m,n,v[100][100],s=0,i,j,nrmin;

int main() {
    cin>>n>>m;  //n - nr de linii, m - nr de coloane
    for(i=0;i<=n-1;i++) // parcurgem fiecare linie
        for(j=0;j<=m-1;j++) //parcurgem fiecare coloana a liniei curente
            cin>>v[i][j]; //citim elementul de pe linia i si coloana j

    for(i=0;i<n;i++){
        nrmin=v[i][0];
        for(j=1;j<=m-1;j++){
            if(v[i][j]<nrmin)
                nrmin=v[i][j];
        }
        //se adauga la suma totala cel mai mic numar de pe linie
        s = s + nrmin;

    }
    cout<<s;

}
