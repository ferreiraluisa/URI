#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double s=1,a=2;

    for(double i=3;i<=39;i+=2){
        s += i/a;
        a *=2;
    }
    cout<<fixed<<setprecision(2);
    cout<<s<<endl;

    return 0;
}
