#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct MinMax{
    int Min;
    int Max;
} MINMAX;

MINMAX* min_max_array(int[], int);
int main(){
    MINMAX* M;
    int A[]= {1,4,69,-21,13,41,0};
    M = min_max_array(A,7);
    cout << M->Min << "\n" << M->Max;
    return 0;
}

MINMAX* min_max_array(int arr[], int arr_len){
        MINMAX* M = (struct MinMax*) malloc(sizeof(struct MinMax)); 
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
        return M;
}
