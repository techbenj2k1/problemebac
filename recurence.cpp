#include <iostream>
int x,y,z;

using namespace std;




int main()
{
    cin>>x>>y;
    z=3*x-y;
    cout<<y<<" "<<x<<" "<<z<<" ";
    while(z>1){ //parcurgem si construim termenul antecedent pana cand gasim primul termen egal cu 1
        y=x; //interschimbarea valorilor;
        x=z;
        z=3*x-y;
        cout<<z<<" ";
    }
        cout<<"1"; //primul termen al secventei, deoarce while-ul se opreste cand gaseste primul termen egal cu 1;
            //Complexitate O(N)- algoritm liniar dpdv al timpului;

    return 0;
}
