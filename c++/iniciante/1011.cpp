#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double r;

    cout<<fixed<<setprecision(3);
    cin>>r;
    cout<<"VOLUME = "<<(4.0/3)*3.14159*r*r*r<<endl;

    return 0;
}
