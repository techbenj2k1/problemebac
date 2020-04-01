#include <iostream>
int n;

using namespace std;
void divizor(int x){
    int p,d=2;
    int maxd=0, maxp=0;
    while(x>1){
            p=0;
        while(x%d==0){++p;x/=d;}
            if(p){
                    //cout<<d<<" "<<p<<" ";
                if(maxp<=p){
                        maxp=p;
                        if(maxd<=d) maxd=d;
                    }
            }

            ++d;
            if(x>1 and d*d>x) d=x;
    }

    cout<<maxd<<" "<<maxp<<" ";
}



int main()
{
    cin>>n;
    divizor(n);

    return 0;
}
