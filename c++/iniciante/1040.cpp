#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double n1,n2,n3,n4,m,ne;
    cin>>n1>>n2>>n3>>n4;

    cout<<fixed<<setprecision(1);
    m = (n1*2+n2*3+n3*4+n4)/10;
    if(m>=7.0){
        cout<<"Media: "<<m<<endl;
        cout<<"Aluno aprovado."<<endl;}
    else if(m<5.0){
        cout<<"Media: "<<m<<endl;
        cout<<"Aluno reprovado."<<endl; }
    else{
        cout<<"Media: "<<m<<endl;
        cout<<"Aluno em exame."<<endl;
        cin>>ne; //nota do exame
        m = (m+ne)/2;
        if(m>=5.0){
            cout<<"Nota do exame: "<<ne<<endl;
            cout<<"Aluno aprovado."<<endl;
            cout<<"Media final: "<<m<<endl;}
        else if(m<5.0){
            cout<<"Nota do exame: "<<ne<<endl;
            cout<<"Aluno reprovado."<<endl;}
}

    return 0;
}
