#include<iostream>
using namespace std;

int main(){
    // let 3 is occured 4 times than storing value and occurance together
    int value = 3;
    int occurance = 4;

    // let given range of value is [0,9];
    int min = 0;
    int max = 9;

    int ans = occurance * (max+1) + value;
    
    //printing value and occurance from this ans  

    cout<<" occurance : "<< (ans/(max+1))<<endl;
    cout<<" stored value: "<< (ans%(max+1))<<endl;
    return 0;
}