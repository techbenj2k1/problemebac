#include <bits/stdc++.h>
#define MAX_N 10005
//afisarea o faci tot in fisier;
using namespace std;
 
 ifstream f("NUMERE.TXT");
 
void recursion(int n){
    int x;
    f>>x;
    if(n>0){
    if(x%2==0){ cout<<x<<" "; recursion(n-1);}
    else{
        recursion(n-1);
        cout<<x<<" ";
    }
    }
}
 
int main()
{
 int n;
 f>>n;
 recursion(n);
}
