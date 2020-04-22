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
        cout<<smin;
}

