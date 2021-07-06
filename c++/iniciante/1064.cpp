#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n,cont=0,soma=0;
    for(int i=0;i<6;i++){
        cin>>n;
        if(n>0){
            cont++;
            soma += n;
        }
    }
    cout<<fixed<<setprecision(0);
    cout<<cont<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1);
    cout<<soma/cont<<endl;

    return 0;

        
}
