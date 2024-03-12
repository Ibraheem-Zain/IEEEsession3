# include <stdio.h>

void order (void);

int main (){

  order ( );
}

void order (void){ 
     int i,j;
     int numElements;
     printf ("enter the number of elements:\n");
     scanf ("%d",&numElements);

     int arr [numElements];
     printf ("enter the elements:\n");
     for (i= 0; i < numElements; ++i){
          printf ("element-%d: ",i+1);
          scanf ("%d",&arr[i]);
     }

     for (i = 0; i < numElements-1; ++i){
        for (j=0; j < numElements-1; ++j){
            if ( arr [j]>arr [j+1]){
                arr [j+1]= arr [j]^arr [j+1];
                arr[j]= arr [j]^arr [j+1];
                arr [j+1]=arr[j]^arr [j+1];
            }
        }
    }

    printf ("the second largest element in the array is: %d\n",arr[numElements-2]);

}