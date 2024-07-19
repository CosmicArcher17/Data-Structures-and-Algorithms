#include <iostream>
using namespace std;

void is(int a[],int n){
    int i,j,t;
    j=n-1;
    i=j-1;
    int comp=0;
    int key=a[j];
    while(i>=0 && a[i]>key){
        comp++;
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=key;

    cout<<"Insertion Sort comparisons: "<<comp<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    is(b,n);
}
