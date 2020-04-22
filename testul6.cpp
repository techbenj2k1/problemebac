//S3-III
#include <bits/stdc++.h>

using namespace std;
int p1,p2;
bool verif(int n){
    if((n%10)*((n%100)/10)==p2){
        n=n/100;

        if((n%1000)==0 or (n%1000)%111==0)
        {
            n=n/1000;

            if((n%10)*((n%100)/10)==p1) return true;
            else return false;
        }
        else return false;
    }
    else return false;

}

int main()
{
    ofstream g("bac.out");
    cin>>p1>>p2;

    for(int i=1000000; i<=9999999; i++)
        if (verif(i)) g<<i<<"\n";


}


