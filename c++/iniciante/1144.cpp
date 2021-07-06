#include <iostream>
using namespace std;

int main(){
    int n,n1,j,i2,i3;
    cin>>n;
    for(int i=1;i<=n;i++){
        i2 = i*i;
        i3 =i*i*i;
        for(j=0;j<=1;j++){
            cout<<i<<" "<<i2+j<<" "<<i3+j<<endl;
        
        }
    }
    return 0;
}
