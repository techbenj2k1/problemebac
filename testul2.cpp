#include <bits/stdc++.h>

using namespace std;

int main()
{
   ifstream f("bac.in");
   int x, s=0;
   f>>x;
   s=x;
  int smin=1000;
   while(f>>x){

    if(s<smin)
    {
        smin=s;
    }
    if(s>0)s=0;
    s+=x;

   }
        if(s<smin)
            smin=s;
        cout<<smin;
}
//S3-1
#include <bits/stdc++.h>
#define MAX_N 10005

using namespace std;
bool viz[MAX_N];
long long P[MAX_N],K;
void ciur() {
	for(int i = 2; i < MAX_N; ++i) {
		if(viz[i] == 0) {
			//P[++K] = i;
			for(int j = i+i; j < MAX_N; j += i) {

				viz[j] = 1;
			}
		}
	}
}
void putere(int n, int p ){
    ciur();
    int exp=0;
    if(viz[p]) cout<<"-1";
    else{
        if(n%p==0){
            while(n%p==0){
                n/=p; //cout<<n<<" ";
                exp++;
            }
            cout<<"\n";
            cout<<exp;
        }
        else cout<<"-1";

    }

    }

int main()
{
  int n,p;
  cin>>n>>p;
  putere(n,p);

}

//S3-2
#include <bits/stdc++.h>
#define MAX_N 10005

using namespace std;

 ifstream f("bac.in");
 int a[101][101],n,m;
void citire(){

    cin>>n>>m;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            f>>a[i][j];
//    for(int i=1;i<=m;i++){
//        for(int j=1;j<=n;j++)
//            cout<<a[i][j]<<" ";
//        cout<<"\n";
    }
}
int main()
{
 citire();
    for(int i=1; i<=m; i++){
           int c=a[i][n];
        for(int j=1;j<=m;j++){
           if(c!=a[j][1]) continue;
           else cout<<c<<" ";
        }
    }



}



