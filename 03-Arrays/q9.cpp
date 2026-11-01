//Print the array in reverse order by arrays.
#include<iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter the number : ";
    cin >> n;
    int arr[n] = {0};
    cout <<"Enter the elements of the array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout <<"The elements of the array in reverse order are : ";
    for (int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}