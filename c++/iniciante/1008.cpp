#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int numf, numh;
    double sal;

    cin>>numf;
    cin>>numh;
    cout<< fixed << setprecision(2);
    cin>>sal;
    cout<<"NUMBER = "<<numf<<endl<<"SALARY = U$ "<<sal*numh<<endl;

    return 0;
}
