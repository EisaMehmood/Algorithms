// Quick Sort using recursion
#include <iostream>
using namespace std;
int partition(int * arr , int s , int e)
{   // First element is pivot
    int pivot = arr[s];
    int count = 0;
    for(int i =s+1;i<=e; i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
     // right place 
     int pivotindex = s+count;
     swap(arr[pivotindex], arr[s]);
      //
      int i = s;
      int j =e;
      while(i<pivotindex && j>pivotindex)
      {
          while(arr[i]<=pivot)
          {
              i++;
          }
          while(arr[j]>pivot)
          {
              j--;
          }
          if(i<pivotindex && j>pivotindex)
          {
              swap(arr[i++],arr[j--]);
          }
           
      }
      return pivotindex;
}
void quicksort(int * arr , int s , int e)
{    // Base 
    if(s>=e)
    return;
    // separating arryas
    int p = partition(arr, s, e);
    // Recursive call for L & R
     quicksort(arr , s,  p-1);
     quicksort(arr , p+1,  e);
    
     
}
int main() {
   int arr[] = {23,9,29,14,19,27};
    quicksort(arr,0,5);
    
for(int i =0; i<6;i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}
