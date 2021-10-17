//q5.To find floor of a given number in a sorted array 
    
#include <iostream>
using namespace std;

int findfloor(int arr[], int l, int h, int x) 
{ 
    //l:lowest index,h:highest index
    if (l > h) 
        return -1; 
  
    if (x >= arr[h]) 
        return h; 
  
   // Find the middle point 
    int mid = (l+h)/2; 
  
    // If middle point is floor. 
    if (arr[mid] == x) 
        return mid; 
  
    // If x lies between mid-1 and mid 
    if (mid > 0 && arr[mid-1] <= x && x < arr[mid]) 
        return mid-1; 
    
	// If x is smaller than mid, floor must be in left half. 
    if (x < arr[mid]) 
        return findfloor(arr, l, mid-1, x); 
  
    // If mid-1 is not floor and x is greater than arr[mid]
    return findfloor(arr, mid+1, h, x); 
} 
  

int main() 
{ 
    int arr[] = {10,15,16,19,24}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int x = 13; 
    int i = findfloor(arr, 0, n-1, x); 
    if (i == -1) 
       cout<<"Floor of "<<x<<"doesn't exist in array"<<endl; 
    else
        cout<<"Floor of "<<x<<" is "<<arr[i]<<endl; 
}
