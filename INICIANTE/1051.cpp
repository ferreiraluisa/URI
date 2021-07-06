#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double sal,imposto;
    cin>>sal;
    if(sal<=2000){
        cout<<"Isento"<<endl;
    }
    if(sal>2000){
        if(sal<=3000){
            imposto = (sal-2000)*0.08;
        }
        else if(sal<=4500){
            imposto = 1000*0.08+(sal-3000)*0.18;
        }
        else if(sal>4500){
            imposto = 1000*0.08+1500*0.18+(sal-4500)*0.28;
        }
        cout<<fixed<<setprecision(2);
        cout<<"R$ "<<imposto<<endl;
    }

    return 0;
}
