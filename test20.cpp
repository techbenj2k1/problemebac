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
