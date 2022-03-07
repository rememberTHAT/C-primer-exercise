#include<iostream>
using namespace std;


int main()
{

    long long world_p,us_p;



    cout<<"Enter the world's population: "<<endl;
    cin>>world_p;
    cout<<"Enter the population of the US: "<<endl;
    cin>>us_p;

    double ans = double(us_p)/world_p*100;
    cout<<"The population of the US is "<<ans<<"% of the world polulation"<<endl;

    return 0;
}
