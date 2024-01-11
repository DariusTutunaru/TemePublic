
// problema 8

#include <iostream>
using namespace std;

int n,v[101][101],i,j,c=1;

int main() {
    cin>>n;

    for(i=1;i<=n;i++) {
        if (i % 2 != 0) {
            for (j = 1; j <= n; j++)
                v[i][j] = c, c++;
        } else {
            for (j = n; j >= 1; j--)
                v[i][j] = c, c++;
        }
    }

    for(i=1;i<=n;i++) {
        for (j = 1; j <= n; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }


}
