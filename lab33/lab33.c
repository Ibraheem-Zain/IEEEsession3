# include <stdio.h>

void take_then_show (void);

int main (){

 take_then_show ();

}

void take_then_show (void){
    printf ("enter ten numbers in the array:\n");
    int arr1 [10];
    for (int i=0; i < 10; ++i){
        scanf ("%d",&arr1[i]);
    }

    for (int i = 0;i < 10;i++){
        printf ("element-%d : %d\n",i+1,arr1[i]);
    }
}