// Q.No - 1.
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter No Of Elements : ";
cin>>n;
int prod[n];
//input
cout<<"Enter Elements : ";
for(int i=0; i<=n-1; i++){
    cin>>prod[i];
}
//output
int mul = 1;
for(int i=0; i<=n-1; i++){
    mul = mul*prod[i];
}
    cout<<"Product : "<<mul;
}