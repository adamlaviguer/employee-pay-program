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
  //after
  cout<<"\nAfter: ";
  for (int i=size; i>0;i--){
    cout<< arr[i]<<" ";
  }
}
