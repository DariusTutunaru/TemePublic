///testul 1
void putere(int n, int& d, int& p){
    int i,p1;
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            p1 = 0;
            while(n % i == 0){
                p1++;
                n /= i;
            }
            if(p1 >= p)p = p1, d = i;
        }
    }
    if(n != 1){
        if(p <= 1)d = n, p = 1;
    }
}

///testul 2

void fii(int n){
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && i != n / i) {
            if (n / i < i) break;
            cout << "(" << n / i << " " << i << ") ";
        }
    }
}

///testul 3

int factori(int n, int m){
    int nr = 0;
    for(int d = 2; d <= n; d++){
        if(n % d == 0 && m % d ==0) {
            while(n % d == 0) n /= d;
            nr++;
        }
    }
    return nr;
}

///testul 4

///ineficient

void generatoare(int n){
    int i,j,ok=0;
    for(i=2;i<=n/2;i+=2){
        for(j=1;j<=n;j++){
            if(i*j + (i/j)==n){
                cout<<i<<"-"<<j<<" ";
                ok=1;
            }
        }
    }
    if(ok==0)
        cout<<"nu exista";
}


///eficient

void generatoare(int n){
    int i,j,ok=0;
    for(i=2;i<=n/2;i+=2){
        j=n/i;
        if(i==n/2)
            j=1;
        if(i*j+(i/j)==n){
            cout<<i<<"-"<<j<<" ";
            ok=1;
        }
    }
    if(ok==0)
        cout<<"nu exista";
}

///testul 5

int baza(int n){
    int cmax = 1;
    while(n){
        cmax = max(n % 10, cmax);
        n /= 10;
    }
    return cmax + 1;
}

///testul 6

void prodprim(int n, int& p){
    p = 1;
    for(int d = 1; d <= n; d++){
        if(n % d == 0){
            p *= d;
            while(n % d == 0){
                n /= d;
            }
                
        }
    }
}

///testul 7

int putere(int n,int p){
    int p1 = 0;
    while(n % p == 0){
        p1++;
        n /= p;
    }
    return (p1 == 0) ? -1 : p1;
    /* echivalent: if(p1 == 0) return -1;
                  else return p1;
    */
    
  
}

///testul 8

int suma(int n){
    int s = 0;
    for(int d = 2; d <= n; d++){
        if(n % d == 0){
            s += d;
            while(n % d == 0) n /= d;
        }
    }
    return s;
}

///testul 9


void suma(int n, int& s){
    s = 0;
    int luat[11] = {0};
    while(n){
        if((n % 10)% 2 != 0 && luat[n%10] != 1)
            s += n % 10, luat[n%10] = 1;
        n /= 10;
    }
}


///testul 10

void produs(int n, int& p){
    p = 1;
    int luat[11] = {0};
    while(n){
        if((n % 10)% 2 == 0 && luat[n%10] != 1)
            p *= n % 10, luat[n%10] = 1;
        n /= 10;
    }
}






































///daca citesti asta esti crazy
