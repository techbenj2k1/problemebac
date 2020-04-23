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

