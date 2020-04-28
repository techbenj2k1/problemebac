//SIII-1
#include <bits/stdc++.h>
#define MAX_N 10005

using namespace std;

 ifstream f("bac.in");

using namespace std;

void divizor(int x, int &mind, int &minp){
    int p,d=2;
    minp=999;
    mind=999;
    while(x>1){
            p=0;
        while(x%d==0){++p;x/=d;}
            if(p){
                    //cout<<d<<" "<<p<<" ";
                if(minp>p){
                        minp=p;
                        mind=999; //cout<<minp<<" ";
                        if(mind>d) mind=d;//cout<<mind<<" ";
                    }
            }

            ++d;
            if(x>1 and d*d>x) d=x;
    }

}

int main()
{
    int d,p,n;
    cin>>n;
    divizor(n,d,p);
    cout<<d<<" "<<p;

    }




