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

//S3-2
#include <bits/stdc++.h>
#define MAX_N 10005

using namespace std;

 //ifstream f("bac.in");

using namespace std;



int main()
{
    char s[101];
    cin.getline(s,101);
    char *p=strtok(s, " ");
    while(p){
            if('a'<=p[0] and p[0]<='z') p[0]=p[0]-32;
            for(int i=1;p[i]; i++){
                if('A'<=p[i] and p[i]<='Z') p[i]=p[i]+32;
                else continue;
            }
        cout<<p<<" ";
        p=strtok(NULL," ");
    }
 }
#include <bits/stdc++.h>
#define MAX_N 10005

using namespace std;

 ifstream f("bac.in");

using namespace std;



int main()
{
    int x, y, nr=1;
    f>>x;
    y=x;
    while (f>>x){
        if(x==y) nr++;
        else {
            cout<<y<<" "<<nr<<" ";
            nr=1;
        }
        y=x;
    }
    cout<<x<<" "<<nr;
 }




