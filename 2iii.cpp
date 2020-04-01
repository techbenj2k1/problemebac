#include <iostream>
int x,y;

using namespace std;
void divizor(int n, int k){
    int p, a[100][100];
    int m=n*k;
    for(int i=1; i<=n; i++){
        p=i;
        for(int j=1; j<=m; j++){
                a[i][j]=p;
            if(j%k==0){p++;}

        }
    }
    for(int i=1; i<=n; i++)
        {
        for(int j=1; j<=n*k; j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
        }

}



int main()
{
    cin>>x>>y;
    divizor(x,y);

    return 0;
}
