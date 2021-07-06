#include <iostream>
using namespace std;

int main(){
    int n,conti=0,contp=0,contpo=0,contne=0;
    for(int i=0;i<5;i++){
        cin>>n;
        if(n>0)
            contpo++;
        if(n<0)
            contne++;
        if(n%2==0)
            contp++;
        if(n%2!=0)
            conti++;
    }
    cout<<contp<<" valor(es) par(es)"<<endl;
    cout<<conti<<" valor(es) impar(es)"<<endl;
    cout<<contpo<<" valor(es) positivo(s)"<<endl;
    cout<<contne<<" valor(es) negativo(s)"<<endl;

    return 0;
}
