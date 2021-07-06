#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
 
    double a,b,c,delta;
    
    cout<<fixed<<setprecision(1);
    cin>>a>>b>>c;
    delta = sqrt(b*b-4*a*c);
    
    if (b*b-4*a*c<0 || a==0) {
        cout<<"Impossivel calcular"<<endl;
    }
 
    else{
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<((-b+delta)/(2*a))<<endl;
        cout<<"R2 = "<<((-b-delta)/(2*a))<<endl;
    }
    
    return 0;
}
