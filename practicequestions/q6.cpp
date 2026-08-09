//Count positive, negative and zero elements by arrays.
#include<iostream>
using namespace std;
int main (){
    int x;
    cout <<"Enter the number : ";
    cin >> x;
    int arr[x] = {0};
    cout <<"Enter the elements of the array : ";
    for (int i=0; i<x; i++){
        cin >> arr[i];
    }
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for (int i=0; i<x; i++){
        if (arr[i] > 0){
            positive++;
        }
        else if (arr[i] < 0){
            negative++;
        }
        else{
            zero++;
        }
    }
    cout <<"The number of positive elements in the array is : " << positive << endl;
    cout <<"The number of negative elements in the array is : " << negative << endl;
    cout <<"The number of zero elements in the array is : " << zero << endl;
return 0;
}