#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c;
    double area,perimetro;

    cin>>a>>b>>c;

    if((abs(b-c))<a && a<(b+c) && (abs(a-c))<b && b<(a+c) && (abs(b-a))<c && c<(b+a)){
        perimetro = a+b+c;
        cout<<fixed<<setprecision(1);
        cout<<"Perimetro = "<<perimetro<<endl;
    }
    else{
        area = ((a+b)*c)/2;
        cout<<fixed<<setprecision(1);
        cout<<"Area = "<<area<<endl;
    }
    
    return 0;

}

