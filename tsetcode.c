#include<stdio.h>
int swap(char a[],int n){
    int low =0 , high = n-2;
    int m = n/2 ;
for(int i=0;i<m;i++){
    a[i]=a[i]+a[high];
    a[high]=a[i]-a[high];
    a[i]=a[i]-a[high]; ;
    high=high-1;
}
}
int main(){
char a[] = "Ashish";
int n = sizeof(a);
for(int i=0;i<n;i++) printf("%c",a[i]);
swap(a,n);
for(int i=0;i<n;i++) printf("%c",a[i]);
}
