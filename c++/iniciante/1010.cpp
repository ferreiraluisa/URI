#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int cod1,num1,cod2,num2;
    double p1,p2;

    cout<< fixed << setprecision(2);
    cin>>cod1>>num1>>p1;
    cin>>cod2>>num2>>p2;
    cout<<"VALOR A PAGAR: R$ "<<num1*p1+num2*p2<<endl;

    return 0;
}
