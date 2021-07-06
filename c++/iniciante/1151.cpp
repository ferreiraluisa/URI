#include <iostream>

using namespace std;

int main(){
    int x,n1=0,n2=1,n3;
    cin>>x;
    for(int i=0;i<x-1;i++){
        n3 = n1+n2;
        if(i==0)
            cout<<n1<<" "<<n2;
        n1 = n2;
        n2 = n3;
        if(i!=0)
            cout<<" "<<n1;
    }
    cout<<"\n";


   
    return 0;
}
