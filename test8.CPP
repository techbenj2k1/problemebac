#include <bits/stdc++.h>

using namespace std;

int main()
{
   ifstream f("bac.in");
   unsigned int k,n;
   int aux, a[21][21];
   cin>>n>>k;
   for(unsigned int i=1; i<=n; i++)
    for(unsigned int j=1; j<=n; j++)
        f>>a[i][j];
   for(unsigned int j=1; j<k-1; j++){
        a[k][j]=a[k][j]^a[k][j+1];
        a[k][j+1]=a[k][j]^a[k][j+1];
        a[k][j]=a[k][j]^a[k][j+1];
   }
      for(unsigned int i=1; i<=n; i++){
        for(unsigned int j=1; j<=n; j++)
           cout<<a[i][j]<<" ";
        cout<<"\n";
      }

}

