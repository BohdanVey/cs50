// Example program
#include <iostream>
#include <string>
void sort(int a[],int n){

  for(int i=0;i<n-1;i++){
    int min=i;
    
    
      for(int j=i;j<n;j++){
      if(a[j]<a[min]){
       min=j;   
      }
      }
     int k=a[i];
     a[i]=a[min];
     a[min]=k;
     std::cout<<a[i]<<" ";
  }
  std::cout<<a[n-1]<<" ";

}
int main()
{
 int a[100],n;
 std::cin>>n;
 for(int i=0;i<n;i++){
     std::cin>>a[i];
 }

sort(a,n);

}
