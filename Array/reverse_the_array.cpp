#include<iostream>
using namespace std;

void reverse_arr (int*,int);
void display_arr(int*,int);

int main(){
    int a[5] = {1,4,6,7,23};
    display_arr(a,5);
    reverse_arr(a,5);
    display_arr(a,5);
    return 0;
}

void display_arr(int* arr,int arr_len){
    for (int i=0;i<arr_len;i++){
    cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void reverse_arr(int* arr,int arr_len){
    int left = 0;
    int right = arr_len-1;
    int temp;
    while(left<right){
        temp = *(arr + right);
        *(arr+right) = *(arr+left);
        *(arr+left) = temp;
        left+=1;
        right-=1;
    }
}
