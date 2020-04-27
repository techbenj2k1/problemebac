#include <bits/stdc++.h>
#define MAX_N 10005

using namespace std;

 ifstream f("bac.in");

using namespace std;
//int Sqrt(int u, int v, int t) {
//int m = (u + v) / 2;
//if (u >= v) { return u; }
//else if (m * m > t) { return Sqrt(u, m - 1, t); } 
//else if (m * m < t) { return Sqrt(m + 1, v, t); }
//else { return m; }
//}
void patrate(int x, int y){
    int s=0;
    int i,c;
    bool ok=0;
    for( i=1; i*i<=y; ++i){
            //cout<<i<<"\n";
           if(i*i>=x) {ok=1;}
             c=(i+1)*(i+1)-y;
        if(c==0) ok=1;
        if( c>0 and c<=(2*i+1)) break;

        if(i*i>x) {cout<<i*i<<"+"; s+=i*i; ok=1;}

    }

    if(ok ){
        s+=i*i;
        cout<<i*i<<"="<<s;
}

else  cout<<"Nu exista";


}



int main()
{
    int x,y;
    cin>>x>>y;
  patrate(x,y);
 }
    //return 0;


