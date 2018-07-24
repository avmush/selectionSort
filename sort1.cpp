#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
 unsigned int size;
 cout<<"enter the amount of sorting numbers"<<endl;
 cin>>size;
 int * arr = new int [size];
 int tmp;
 int largest;
 srand(time(NULL));

 cout<<"automatic filling the numbers is on"<<endl;
 for(int i = 0; i < size; ++i)
 {
   arr[i] = rand()%1000;
   cout<<arr[i]<<" ";
 }
 
 cout<<endl<<"---------------------------"<<endl<<"numbers are sorted"<<endl;

for(int j = size-1; j >= 0; --j)
{
 for (int i = 0; i < size-1 ; ++i)
  {
     
      if (arr[i+1] > arr[i])
      {
        largest = arr[i+1];
      } 
      else
      {
        tmp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = tmp;
        largest = arr [i+1];

      }    
  }
}
  for(int j = 0;j < size; ++j)
  {
      cout<<arr[j]<<" ";
  }
  //cout<<largest;
    
    delete [] arr;
}

