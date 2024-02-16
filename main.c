#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10][10];

    for(int i = 0 ; i<10 ; i++){

        for(int j = 0 ; j<10 ; j++){
            if(i == j){
                    arr[i][j] = 1 ;
            }else{
                arr[i][j] = 0 ;
            }

        }
    }

    for(int i = 0 ; i<10 ; i++){
        for(int j = 0 ; j<10 ; j++){
            printf("%3d",arr[i][j]);
        }

        printf("\n");
    }





}
