#include <iostream>
using namespace std;

int v[100][100],n,i,j,x;

int main()
{
    cin>>n>>x;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            v[i][j]=0;

    for(j=0;j<n;j++)
        v[0][j]=x;
    for(i=0;i<n;i++)
        v[i][0]=x;

    for(i=1;i<n;i++) {
        for (j = 1; j < n; j++) {
            v[i][j] = v[i][j - 1] + v[i - 1][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
