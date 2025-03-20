#include<iostream>
using namespace std;

void perms(int arr[],int n,int start,int end){
if(start==end){
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
}
for(int i=start;i<=end;i++){
swap(arr[start],arr[i]);
perms(arr,n,start+1,end);
swap(arr[start],arr[i]);
}
}
int main(){
int arr[3]={1,2,3};
perms(arr,3,0,2);
}
