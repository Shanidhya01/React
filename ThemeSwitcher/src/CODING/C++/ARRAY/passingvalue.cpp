#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
void change(int b[],int size){
    b[3] = 6;
}
int main(){
    int arr[] = {1,4,2,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    change(arr,size);
    display(arr,size);
    return 0;
}