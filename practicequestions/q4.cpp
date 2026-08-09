//Find the max, min, second max and second min elements by arrays.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout <<"Enter the number : ";
    cin >> x;
    int arr[x] = {0};
    cout <<"Enter the elements of the array : ";
    for (int i=0; i<x; i++){
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    int secondmax = arr[0];
    int secondmin = arr[0];
    for (int i=0; i<x; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
        if (arr[i] > secondmax && arr[i] < max){
            secondmax = arr[i];
        }
        if (arr[i] < secondmin && arr[i] > min){
            secondmin = arr[i];
        }
    }
    cout <<"The second minimum element of the array is : " << secondmin << endl;
    cout <<"The second maximum element of the array is : " << secondmax << endl;
    cout <<"The minimum element of the array is : " << min << endl;
    cout <<"The maximum element of the array is : " << max;
    return 0;
}