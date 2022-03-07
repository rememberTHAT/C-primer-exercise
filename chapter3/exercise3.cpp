#include<iostream>
using namespace std;


const int factor = 60;


int main()
{

    double degree, minutes, seconds;

    cout<<"Enter a latitude in degrees, minutes and seconds: "<<endl;
    cout<<"First, enter the degrees: "<<endl;
    cin>>degree;
    cout<<"Next, enter the minutes of arc: "<<endl;
    cin>>minutes;
    cout<<"Finally, enter the seconds of arc: "<<endl;
    cin>>seconds;


    double ans =degree+minutes/60+seconds/3600;

    cout<<degree<<" degrees, "<<minutes<<" minutes, "<<seconds<<" seconds = "<<ans<<" degrees"<<endl;

    return 0;
}
