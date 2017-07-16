// Example program
#include <iostream>
#include <string>
void sort(int a[],int n){

  for(int i=0;i<n-1;i++){
  	for(int j=i;j<n;j++){
        	if(a[i]>a[j]){
       			 int  k=a[i];
       			 a[i]=a[j];
      			 a[j]=k;
      }
      }
    
  }
  for(int i=0;i<=n-1;i++){
  	  std::cout<<a[i]<<" ";
}

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
