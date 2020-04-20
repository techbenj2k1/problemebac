#include <iostream>
 
using namespace std;
 
 
    void nr_rot(int n, int k){
 
        int nr1=0, nr2=0, p1=1, p2=1;
        int ok=1;
        if(n%10==k) cout<<n;
 
        else{
            while(n>0){
                if(n%10==k) ok=0;
                if(ok==1){
                    nr1=nr1+p1*(n%10);
                    p1*=10;
                }
                else if(ok==0){
                    nr2=nr2+ p2*(n%10);
                    p2*=10;
                }
                n/=10;
            }
 
            cout<<((nr1*p2)+nr2);
            }
        }
        //STRING VERSION
       #include <bits/stdc++.h>
#include <string>

using namespace std;




int main()
{
   char s[100],k[2], t[100];
   char *p;
   int n;
    cin>>s>>k;
   char ch=k[0];
    if(strchr(s,ch)){
        p=strchr(s,ch);
         int nr=strlen(s) - strlen(p) + 1;
        strcpy(t,s);
        strcpy(t+nr,"");
        strcat(p+1,t);
        n=stoi(p+1);
    }
   else{
    n=stoi(s);
   }
    cout<<n;

    return 0;
}
