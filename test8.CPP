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
//S3-1
#include <bits/stdc++.h>
#define MAX_N 100005

using namespace std;
long long  K, P[MAX_N];

bool viz[MAX_N];

void ciur() {

	for(int i = 2; i < MAX_N; ++i) {

		if(viz[i] == 0) {

			P[++K] = i;

			for(int j = i+i; j < MAX_N; j += i) {

				viz[j] = 1;

			}
		}
	}
}
int main()
{
    ciur();
 int n,s=0;

    cin>>n;
    int i=1;
    for(;i<=K and P[i]<=n; i++){
        if(n%P[i]) continue;
        else s+=P[i];
    }
    cout<<s;

}



