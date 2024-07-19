#include <iostream>
using namespace std;

void bs(int a[],int n){
    int i,j,t;
    int comp=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            comp++;
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<"Bubble Sort Comparisons: "<<comp<<endl;
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
    bs(a,n);
}
