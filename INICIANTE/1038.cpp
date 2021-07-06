#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int a,b;
    
    cin>>a>>b;
    cout<<fixed<<setprecision(2);
    
    if(a==1)
        cout<<"Total: R$ "<<4.00*b<<endl;
    else if(a==2)
        cout<<"Total: R$ "<<4.50*b<<endl;
    else if(a==3)
        cout<<"Total: R$ "<<5.00*b<<endl;
    else if(a==4)
        cout<<"Total: R$ "<<2.00*b<<endl;
    else if(a==5)
        cout<<"Total: R$ "<<1.50*b<<endl;
 
    return 0;
}
