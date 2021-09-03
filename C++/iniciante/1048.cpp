#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double sal,novosal,aumento,perce;
    cin>>sal;

    if(sal<=400){
        perce = 15;
        aumento = 0.15*sal;
        novosal = sal + aumento;
    }
    else if(sal>400 && sal<=800){
        perce = 12;
        aumento = 0.12*sal;
        novosal = sal + aumento;
    }
    else if(sal>800 && sal<=1200){
        perce = 10;
        aumento = 0.1*sal;
        novosal = sal + aumento;
    }
    else if(sal>1200 && sal<=2000){
        perce = 7;
        aumento = 0.07*sal;
        novosal = sal + aumento;
    }
    else{
        perce = 4;
        aumento = 0.04*sal;
        novosal = sal + aumento;
    }
    cout<<fixed<<setprecision(2);
    cout<<"Novo salario: "<<novosal<<endl;
    cout<<"Reajuste ganho: "<<aumento<<endl;
    cout<<fixed<<setprecision(0);
    cout<<"Em percentual: "<<perce<<" %"<<endl;

    return 0;

}
