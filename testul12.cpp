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


