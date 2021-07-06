#include <iostream>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double maior=a,medio=a,menor=a;
    bool equilatero=false;
    if(a>=b+c||b>=a+c||c>=b+a){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    else if(a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    else if(a*a<b*b+c*c || b*b<a*a+c*c || c*c<a*a+b*b){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(a==b && a==c && c==b){
        cout<<"TRIANGULO EQUILATERO"<<endl;
        equilatero=true;
    }
    if((a==b || b==c|| c==a) && equilatero==false){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }

    return 0;
}
