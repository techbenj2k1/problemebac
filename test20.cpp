#include <bits/stdc++.h>

using namespace std;

ifstream f("bac.in");
//const int MASK=99;
int vf[201];
#define vf (vf+100)
const int SIZE=201;
int main() {
    char a[7][7];
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            a[i][j]='a';
            if(i>=j and i+j<=6) a[i][j]='b';
            if(i<=j and i+j>=6) a[i][j]='b';
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

}
#include <bits/stdc++.h>

using namespace std;

ifstream f("bac.in");
//const int MASK=99;
int vf[201];
#define vf (vf+100)
const int SIZE=201;
int main() {
    char s[101], t[101];
    int j;
    cin.getline(s,101);
    for(unsigned int i=0; s[i]; i++){
        if(s[i]!=',') continue;
        if(s[i]==','){
            j=i;
            while(s[j]!=' '){
                strcpy(t,s+j+1);
                strcpy(s+j,t);
            }
        }
    }
        cout<<s;
}
#include <bits/stdc++.h>

using namespace std;

ifstream f("bac.in");
const int SIZE=201;
int main() {
  int x, s, smax=-1;
  int y;
  f>>y;
  s=y;
  while(f>>x){
        //cout<<x<< " ";
    if((x+y)%2==0){
        s+=y;
        //cout<<y<<" ";
    }
    else{
        s+=y;
        if(s>smax) smax=s;
        s=0;
    }
    y=x;
  }
    if(s>smax) smax=s;
    cout<<smax;
}

