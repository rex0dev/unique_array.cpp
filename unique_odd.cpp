#include<iostream>
using namespace std;

void unique(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j <size; j++){
            if( i == j){
                continue;
            }
            if(arr[i] == arr[j]){
                arr[i] = 1;
                arr[j] = 1;
            }
        }
    }
}



int main(){
    int a[1000], size;
    cin>>size;
    for(int i = 0; i < size; i++){
        cin>>a[i];
    }
    unique(a, size);
    for(int j = 0; j < size; j++){
        if(a[j] != 1){
            cout<<"Unique value is :"<<a[j];
        }
    }
}