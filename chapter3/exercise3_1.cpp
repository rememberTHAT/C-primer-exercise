#include<iostream>
using namespace std;

const int trans = 12;

int main()
{   int height=0;


    cout<<"Please enter your height:__\b\b"<<endl;
    cin>>height;

    cout<<"Your height is "<<height/trans<<" Inches and "<<height%trans<<" foot."<<endl;

    return 0;
}
