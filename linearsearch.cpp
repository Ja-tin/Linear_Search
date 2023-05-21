#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key)
      return 1;
   }
  return 0;
}

int main() {
  int arr[15]={2,8,5,9,-2,-4,-7,12,1,76,24,88,34,29,4};
  cout<<"Enter the element that you want to search:-"<<endl;
  int key;
  cin>>key;

  bool found=search(arr,15,key);

  if(found){
    cout<<"key is found"<<endl;
  }
  else{
    cout<<"key is not found"<<endl;
  }
}