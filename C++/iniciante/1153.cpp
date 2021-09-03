#include <iostream>

using namespace std;

int main(){
    int n,f=1;
    cin>>n;

    for(int i=0;i<n;i++){
        if(n==0)
            break;
        if(n-1==0)
            break;
        f *= (n-i);
    }
    
    cout<<f<<endl;
    return 0;
}
