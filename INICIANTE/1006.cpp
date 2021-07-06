#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double A,B,C,media;

    cout<< fixed << setprecision(4);
    cin>>A;
    cin>>B;
    cin>>C;
    cout<< fixed << setprecision(1);
    media=((A*2)+(B*3)+(C*5))/10;
    cout<<"MEDIA = "<<media<<endl;

    return 0;
}
