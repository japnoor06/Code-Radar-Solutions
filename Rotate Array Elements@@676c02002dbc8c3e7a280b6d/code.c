#include<stdio.h>
void rotate(int arr[];int start;int end){
    for(int i=start,j=end;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
int arr[n];
int n;
int k;
k=k%n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
rotate(arr,0,n-1);
rotate(arr,0,k-1);
rotate(arr,k,n-1);
}

