#include <iostream>
using namespace std;

int main(){
    double n,cont=0;
    for(int i=0;i<=5;i++){
        cin>>n;
        if(n>0)
            cont++;
    }
    cout<<cont<<" valores positivos"<<endl;

    return 0;

        
}
