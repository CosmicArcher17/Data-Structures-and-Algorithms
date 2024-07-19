#include <iostream>
using namespace std;

void ss(int a[],int n){
    int i,j,t;
    int comp=0;
    int min=a[0];
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            comp++;
            if(min>a[j]){
                t=min;
                min=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"Selection Sort comparisons: "<<comp<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ss(a,n);
}
