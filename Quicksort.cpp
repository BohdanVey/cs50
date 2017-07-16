#include<iostream>
void QuickSort (int a[], /* масив для сортування */
		unsigned int N, /* розмір масиву */
		int L, /* ліва межа сортування */ 
		int R) /* права межа сортування */
{
int it=R;
int jt=L;
int x=a[(L+R)/2];
while(it>=jt){
   while(a[it]>x){
    it--;   
   }
     while(a[jt]<x){
    jt++;
   }
    if (it>=jt){
        int w=a[it];
        a[it]=a[jt];
        a[jt]=w;
        jt++;
        it--;
        
    }
}
if(it>L){
    QuickSort(a,N,L,it);
}
if(jt<R){
    QuickSort(a,N,jt,R);
}
}   
int main()
{
 int a[100],n;
 std::cin>>n;
 for(int i=0;i<n;i++){
     std::cin>>a[i];
 }

QuickSort(a,n,0,n-1);
for(int i=0;i<n;i++){
     std::cout<<a[i];
 }
}
