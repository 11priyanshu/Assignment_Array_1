// Q.No - 3.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size Of Array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter Elements In Array : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    //output
    int min = INT_MAX;
    for(int i=0; i<=n-1; i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<"Minimum Elements : "<<min;
}