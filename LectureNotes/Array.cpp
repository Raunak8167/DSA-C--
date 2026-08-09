#include <iostream>
using namespace std;
int main () {
int nums [] = {6,18,19,37,0,-90,-101};
int size = 7;
int smallest =INT_MAX;
int largest =INT_MIN;
for (int i=0; i<size; i++)

{
   // if (nums [i]<smallest)
   // {
    //    smallest=nums[i];} 
   // this all can be replaced by smallest = min(nums[i], smallest);
   smallest = min(nums[i], smallest);
   largest = max(nums[i], largest);
   }

cout << "smallest = " << smallest << endl;
cout << "largest = " << largest << endl;
 return 0;
}