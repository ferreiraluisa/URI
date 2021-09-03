#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int t,v,d;
    double ql;

    cin>>t;
    cin>>v;
    d= t*v;
    cout<< fixed << setprecision(3);
    cout<<d/12.0<<endl;

    return 0;
}
