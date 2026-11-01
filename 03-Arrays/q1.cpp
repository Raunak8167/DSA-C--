//by using arrays going to print Take n elements and print the array.
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
    cout <<"The elements of the array are : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}