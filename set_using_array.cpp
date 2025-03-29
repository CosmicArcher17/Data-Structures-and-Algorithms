#include<iostream>
using namespace std;

int arr[8]={1,2,3,4,5,3,2,4};
    int uni[8]={};

    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<=i;j++){
            if(arr[i]!=uni[j] && j==i){
                uni[j]=arr[i];
                break;
            }
            else if(arr[i]==uni[j]){
                break;
            }
        }
    }
    for(int i=0;i<8;i++){
        cout<<uni[i]<<" ";
    }
