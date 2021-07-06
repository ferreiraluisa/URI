#include <iostream>

using namespace std;

int main(){
    long long int f[61];
    int n,x;
    cin>>n;
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=60;i++)
        f[i]=f[i-2]+f[i-1];
    for(int i=0;i<n;i++){
        cin>>x;
        cout << "Fib(" << x << ") = " << f[x] << "\n";
    }
    


   
    return 0;
}
