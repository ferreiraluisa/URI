#include <iostream>
using namespace std;

int main () {
    int a,b,c;
    int maior,medio,menor;
    cin>>a>>b>>c;
    maior = 0;
    medio = 0;
    menor = 0;


    if(a>=b && a>=c){
        maior = a;
        if(b>=c){
            medio=b;
            menor=c; }   
        else if(c>=b){
            medio=c;
            menor=b;}
}
    if(b>=a && b>=c) {
        maior = b;
        if(a>=c){
            medio=a;
            menor=c; }
        else if(c>=a) {
            medio=c;
            menor=a;}
}
    if(c>=a && c>=b) {
        maior = c;
        if(a>=b){
            medio=a;
            menor=b;
        }
        else if(b>=a){
            medio=b;
            menor=a;
        }
    }
    cout<<menor<<"\n"<<medio<<"\n"<<maior<<endl;
    cout<<""<<endl;
    cout<<a<<"\n"<<b<<"\n"<<c<<endl;

    return 0;
    
}
