#include<stdio.h>
void rotate(int arr[],int start,int end){
    for(int i=start,j=end;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
int n;
scanf("%d",&n);
int arr[n];
int k;
scanf("%d",&k);
k=k%n;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
rotate(arr,0,n-1);
rotate(arr,0,k-1);
rotate(arr,k,n-1);
}

