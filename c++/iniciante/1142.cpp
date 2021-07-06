#include <iostream>
using namespace std;

int main(){
    int n,j=1,k=3;
    cin>>n;
    for(int i=1;i<n;i++){
        k+=4;
        for(j;j<k;j+=4){
            cout<<j<<" "<<j+1<<" "<<j+2<<" PUM"<<endl;
        }
    }
    return 0;
}
