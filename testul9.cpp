#include <bits/stdc++.h>
#define MAX_N 100005

using namespace std;

int main()
{
   char s[51][51],a[51];
   int n;
   cin>>n;

   for(int i=0; i<n; i++)
    cin>>s[i];
   int k=strlen(s[n-1]);

        for(int i=0; i<n-1; i++){
            strcpy(a,s[i]);
            strcpy(a+k,"");
            if(strcmp(a,s[n-1])==0) cout<<s[i]<<" ";
        }




}
#include <bits/stdc++.h>
#define MAX_N 10005

using namespace std;

 ifstream f("bac.in");

void suma(int n, int &s){
    int v[10]={0};

    while(n){

        if((n%10)%2!=0 and v[n%10]==0){
            v[n%10]++;
            s+=n%10;
        }
        n/=10;
    }
}

int main()
{
    int n,s=0;
    cin>>n;
    suma(n,s);
    cout<<s;


}


//S3-3
#include <bits/stdc++.h>
#define MAX_N 10005

using namespace std;

 ifstream f("bac.in");


int main()
{
   int x,k,l=0, lmax=0, s=0;
   f>>k;
   while(f>>x){
        if(x%k==0) l++;
        else{
            if(lmax<l){ lmax=l; s=0;}
            if(l==lmax) s++;
            l=0;

        }
   }
    //cout<<l<<" ";
        if(l>lmax) lmax=l, s=0;
        if(l==lmax) s++;

    cout<<lmax<<" "<<s;

}


