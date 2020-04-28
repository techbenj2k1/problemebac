#include <bits/stdc++.h>
#define MAX_N 10005

using namespace std;

 ifstream f("bac.in");

using namespace std;



int main()
{
   char s[105];
   int poz;
   cin.getline(s,105);
   for(int i=strlen(s)-1; i>=0; i--){
    if (strchr("aeiou",s[i])) {poz=i;  break; }
   }
   char t[105];
   //cout<<s+poz;
 strcpy(t,s+poz+1);
 strcpy(s+poz, t);
 cout<<s<<"\n";
 //cout<<p;


 }
//s3-3
#include <bits/stdc++.h>
#define MAX_N 10005

using namespace std;

 ifstream f("bac.in");

using namespace std;



int main()
{
 int x;
    cin >>x;
    bool ok=0;

        cout<<x<<" ";
        while(x>1){
            if(x<11){
                    x=x-1;
                    ok=1;
            }
            if(x%2==0 and ok==0){
               x=x/2;
            }
            else if(x%2==1 and ok==0){
               x=x-1;
            }

            cout<<x<<" ";
        }
    }

//SI-1
int pDoi(int n){
int p=1;
    while(p<=n){
        p*=2;
    }
    return p/2;
}




