
// cub magic - probleme pt performanta matrici

#include <iostream>
using namespace std;

int n,v[101][101],i,j,c=1;

int main() {
    cin>>n;
    
    i=(n+1)/2;j=n;

    while(c<=n*n) {
        v[i][j] = c;
        if (c % n != 0 || c == 1) {
            if (i < n && j < n) {
                i++;
                j++;
            } else if (j == n) {
                i++;
                j = 1;
            } else if (i == n) {
                i = 1;
                j++;
            }
        } else {
            j--;
        }
        c++;
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }

}
