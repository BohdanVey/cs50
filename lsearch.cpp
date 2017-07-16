// Example program
#include <iostream>
#include <string>
int lsearch(int a[],int k,int n){
  for(int i=0;i<n;i++){
    
   if (a[i]==k){
    return i;   
   }
    
  }
    return -1;
}
int main()
{
 int a[100],n;
 std::cin>>n;
 for(int i=0;i<n;i++){
     std::cin>>a[i];
 }
int k;
std::cin>>k;
std::cout<<lsearch(a,k,n);
}
