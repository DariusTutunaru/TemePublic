
// problema 9

#include <iostream>
using namespace std;

int n,v[101][101],i,j,c=1,start,stop;

int main() {
    cin>>n;

    start=1,stop=n;

    while(c<=n*n) {
        for (j = start; j <= stop; j++)
            v[start][j] = c, c++;
        for (i = start + 1; i <= stop; i++)
            v[i][stop] = c, c++;
        for (j = stop - 1; j >= start; j--)
            v[stop][j] = c, c++;
        for (i = stop - 1; i > start; i--)
            v[i][start] = c, c++;
        start++;
        stop--;
    }

    for(i=1;i<=n;i++) {
        for (j = 1; j <= n; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }

}







//cine citeste asta e smeker
