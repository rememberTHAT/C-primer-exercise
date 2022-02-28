#include<iostream>
using namespace std;

double trans(int num){
  
  double ans;
  ans = 1.8*num + 32;
  
  return ans;
}

int main(){
    
    int num;
    
    cout<<"Please enter a Celsius value : "<<endl;
    cin>>num;
    cout<<num<<" degresss Celsius is "<<trans(num)<<" degrees Fahrenheit."<<endl;
  
    return 0; 
}
