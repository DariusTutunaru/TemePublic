#include <iostream>
#include <cmath>
using namespace std;

int n,v[26][26],s=0,i,j,ok=0;

int main() {
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>v[i][j];
    
    for(i=1;i<=n;i++) {
        for (j = 1; j < i; j++)
            if (sqrt(v[i][j]) == int(sqrt(v[i][j])))
                s += v[i][j], ok = 1;
    }
    
    if(!ok)
        cout<<"nu exista";
    else
        cout<<s;

}
