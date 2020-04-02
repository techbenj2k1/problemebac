#include <iostream>
int x,y,z;

using namespace std;




int main()
{
    cin>>x>>y;
    z=3*x-y;
    cout<<y<<" "<<x<<" "<<z<<" ";
    while(z>1){
        y=x;
        x=z;
        z=3*x-y;
        cout<<z<<" ";
    }
        cout<<"1";

    return 0;
}
