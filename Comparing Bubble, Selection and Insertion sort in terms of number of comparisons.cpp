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

}

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
}

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
}
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    bs(a,n);
    ss(a,n);
    is(b,n);
}
