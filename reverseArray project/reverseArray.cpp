#include <iostream>

using namespace std;

void reverseArray(int arr[], const int size);

int main()
{
  const int SIZE=4;
  int array[SIZE]={1,2,3,4};

  reverseArray(array, SIZE);
  return 0;
}

void reverseArray(int arr[], const int size){
  //before
  cout<<"Before: ";
  for (int i=0; i<size;i++){
    cout<< arr[i]<<" ";
  }
  cout<<endl;
  //after
  cout<<"After: ";
  for (int j=(size-1); j>(-1);j--){
    cout<< arr[j]<<" ";
  }
  cout<<endl;
}
