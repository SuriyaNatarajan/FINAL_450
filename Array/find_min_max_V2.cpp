#include<iostream>
#include<stdlib.h>
using namespace std;

struct MinMax{
    int Min;
    int Max;
};

void min_max_array(int[], int, struct MinMax* M);

int main(){
    struct MinMax M;
    int A[]= {1,4,69,-21,13,41,0,100};
    min_max_array(A,8,&M);
    cout << M.Min << "\n" <<M.Max;
    return 0;
}

void min_max_array(int arr[], int arr_len, struct MinMax* M){ 
        M->Min = arr[0];
        M->Max = arr[0];
        for (int i=1; i < arr_len;i++){
            if (arr[i] > M->Max){
                M->Max = arr[i];
            }
            else if (arr[i] < M->Min){
                M->Min = arr[i];
            }
        }
}
