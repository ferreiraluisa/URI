#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double n=1,soma=0,cont;
    
    while(true){
        cin>>n;
        if(n<0)
            break;
        soma += n;
        cont++;
        
    }
    cout<<fixed<<setprecision(2);
    cout<<soma/cont<<endl;

    return 0;
}
