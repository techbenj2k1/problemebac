#include <bits/stdc++.h>
#include <string>

using namespace std;


void del(char s[101]){
    char t[101];
    cin.get(s,101);
    int j;
    for(int i=strlen(s);i>=0; i--){
        if(s[i]!='-') continue;
        if(s[i]=='-'){
                j=i;
            while(s[j]!=' '){

                    strcpy(t,s+j+1);
                    strcpy(s+j,t);

            }

        }

        }
        cout<<s;
    }



int main()
{
    char s[101];
    del(s);
    return 0;
}
