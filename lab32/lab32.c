# include <stdio.h>

void swape ();

int main (){

swape();
    
}
void swape (){
    printf ("enter four numbers in the frist array:\n");
    int arr1 [4];
    for (int i=0; i < 4; ++i){
        scanf ("%d",&arr1[i]);
    }

    printf ("enter four numbers in the frist array:\n");
    int arr2 [4];
    for (int i=0; i < 4; ++i){
        scanf ("%d",&arr2[i]);
    }

    for (int i = 0;i < 4;i++){
        int swape = arr1[i]^arr2[i];
        arr2 [i]= swape ^ arr2 [i];
        arr1 [i]= swape ^ arr1 [i];   
    }
    
    printf ("the frist array becomes:\n");
       for (int i = 0;i < 4;i++){
           printf ("%d- %d\n",i+1,arr1[i]);
       }

    printf ("the second array becomes:\n");
       for (int i = 0;i < 4;i++){
           printf ("%d- %d\n",i+1,arr2[i]);
       }
}