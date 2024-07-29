#include <iostream>
using namespace std;

void ins(int a[],int n){
    int i,j;
    for(j=1;j<n;j++){
        i=j-1;
        int key=a[j];
        while(i>=0 && a[i]>key){
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;     
    }
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
