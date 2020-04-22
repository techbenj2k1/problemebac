//SII-5(Testul 6)
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
#include <bits/stdc++.h>
//SII-5(Testul 10)

using namespace std;

int main()
{
    ifstream f("bac.in");
  int a[5][6];
    for(int j=4; j>=0; j--){
            a[3][j]=20-j;
        for(int i=2; i>=0; i--)
            a[i][j]=a[i+1][j]-5;
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";


}
}

//SIII - I
#include <bits/stdc++.h>
#include <string>

using namespace std;


int v[10];
void P_imp(int n, int &p){

    while(n){
        if(v[n%10]==0 and (n%10)%2==0) {
            v[n%10]++;
            p*=n%10;
        }
        n/=10;
    }
}

int main()
{
   int n, p=1;
   cin>>n;
   P_imp(n,p);
   cout<<p;
    return 0;
}
//SIII- 2
#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool ok=0;
   char s[105], cuv[105], c[]="succes";
   cin.getline(s,105);
   char *p=strtok(s, " ");
    strcat(cuv,p);
    strcat(cuv," ");
    p=strtok(NULL," ");
    while(p){

        if(p[strlen(p)-1]==cuv[strlen(cuv)-2]) {

                ok=1;
            strcat(cuv, c);
            strcat(cuv," ");
            strcat(cuv,p);
            strcat(cuv," ");
        }
        else{strcat(cuv,p);
            strcat(cuv," ");
        }
        p=strtok(NULL," ");
    }
    if(ok)
        cout<<cuv;
    else cout<<"NU EXISTA";



    return 0;
}
//SIII-3
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream f("bac.in");
  int x, y,l=2, lmax=0, rmax;
  f>>x>>y;
  int r=y-x;

  while(f>>x){

    if(x-y==r){
        l++;

    }
    else{
        if(l>lmax) lmax=l, rmax=r;
        r=x-y;
        l=0;

    }
    y=x;
  }
        if(l>lmax) lmax=l, rmax=r;
    cout<<rmax;

    return 0;
}

