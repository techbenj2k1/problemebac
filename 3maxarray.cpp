#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");
 int x;
   int m1,m2,m3;

int main()
{

   while(f>>x){
        if(x%100==20){
            if(x>m1)
            {   m3=m2;
                m2=m1; //comparam pe cazuri numerele si le interschimbam asta ofera O(n);
                m1=x;

            }
            else if(x>m2 and m2!=0){
                m3=m2;
                m2=x;
            }
            else if(x>m3) m3=x;
        }
   }
   cout<<m3<<" "<<m2<<" "<<m1;
    return 0;
}
