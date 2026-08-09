//Count the number of even and odd elements by arrays.
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
    int even = 0;
    int odd = 0;
    for (int i=0; i<n; i++){
        if (arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout <<"The number of even elements in the array is : " << even << endl;
    cout <<"The number of odd elements in the array is : " << odd;
    return 0;
}