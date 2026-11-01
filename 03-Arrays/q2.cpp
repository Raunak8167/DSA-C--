//Find the sum of all elements using arrys.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number : ";
    cin >> n;
    int arr[n] = {0};
    cout <<"Enter the elements of the array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    cout <<"The sum of the elements of the array is : " << sum;
    return 0;
}