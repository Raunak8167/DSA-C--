//Find the average of elements using arrays.
#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int arr[n] = {0};
    cout << "Enter the elements of the array : ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }

    float average = sum / (float)n;
    cout <<"The sum of the elements of the array is : " << sum << endl;
    cout << "The average of the elements of the array is : " << average;
    return 0;
}