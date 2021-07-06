#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    double m[n][3];

    for(int i=0;i<=(n-1);i++){
        for(int j=0;j<=2;j++){
            cin>>m[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(1);
        cout<<(2*m[i][0]+3*m[i][1]+5*m[i][2])/10<<endl;
    }

    return 0;
    
}
