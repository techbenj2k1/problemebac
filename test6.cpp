//SII-5
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int a[5][6];
    for(int j=0; j<5; j++){
            a[0][j]=16+j;
        for(int i=1; i<4; i++)
            a[i][j]=a[i-1][j]-5;
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
