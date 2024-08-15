// // Q.No - 4.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;
    int arr[n];
    // Input
    cout << "Enter Elements In Array: ";
    for (int i = 0; i <= n-1; i++) {
        cin >> arr[i];
    }
    //Output
    bool flag = false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        if(flag==true) break;
    }
    if(flag==true) cout<<"Contains Duplicate";
    else cout<<"All Elements Are Unique";
}