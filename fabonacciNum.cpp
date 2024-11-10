#include<iostream>
using namespace std;
int fabonacci(int n){
    if(n==0 || n==1){
        return n;
    }else{
        return fabonacci(n-1)+fabonacci(n-2);
    }

}
int main(){
    int n;
    cout<<"Enter the Positive number:";
    cin>>n;
    cout<<"Fibonacci number at position "<<n<<" is: "<<fabonacci(n)<<endl;
    return 0;
}