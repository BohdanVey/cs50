  #include <iostream>
#include <string>
int bsearch(int key,int a[],int min,int max){
 int mid=(min+max+1) /2;
 if(key>a[mid]){
     bsearch(key,a,mid+1,max);
 }
 else if(key<a[mid]){
     bsearch(key,a,min,mid-1);
 }
 else{
  return mid;   
 }
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
std::cout<<bsearch(k,a,0,n-1);
}
