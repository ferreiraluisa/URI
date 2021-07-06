#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double x1,x2,y1,y2,d;

    cout<< fixed << setprecision(1);
    cin>>x1>>y1;
    cin>>x2>>y2;
    cout<< fixed << setprecision(4);
    d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<d<<endl;

    return 0;
}
