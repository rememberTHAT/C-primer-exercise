#include<iostream>
using namespace std;

double trans(double num){
  
  double ans;
  ans = 265608/4.2*num ;
  
  return ans;
}

int main(){
    
    int num;
    
    cout<<"Enter the number of light years : "<<endl;
    cin>>num;
    cout<<num<<" light years = "<<trans(num)<<" astronomical units. "<<endl;
  
    return 0; 
}
