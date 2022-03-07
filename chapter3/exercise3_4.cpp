#include<iostream>
using namespace std;


int main()
{

    long long seconds;


    cout<<"Enter the number of seconds: "<<endl;
    cin>>seconds;
    cout<<seconds<<" seconds = "<<seconds/(3600*24)<<" days, "<<(seconds%(3600*24))/3600<<" hours， "<<((seconds%(3600*24))%3600)/60<<" minutes, "<<((seconds%(3600*24))%3600)%60<<" seconds"<<endl;

    return 0;
}
