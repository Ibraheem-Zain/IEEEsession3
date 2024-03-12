# include <stdio.h>

void fill_and_pick (void);

int main (){

 fill_and_pick ();

}

void fill_and_pick (void){

   int i;
   int max;
   int numElements;
   printf ("enter the number of elements:\n");
   scanf ("%d",&numElements);

   int arr [numElements];
   printf ("enter the elements:\n");
   for (i= 0; i < numElements; ++i){
      printf ("element-%d: ",i+1);
      scanf ("%d",&arr[i]);
   }
     
     max = arr[0];
        for(i= 1; i < numElements; ++i){
            if(max < arr[i]){
                max = arr[i];
            }
        }    
   printf ("the maximum element is: %d\n",max);  

     max = arr[0];
        for(i= 1; i < numElements; ++i){
            if(max > arr[i]){
                max = arr[i];
            }
        }    
   printf ("the minimum element is: %d\n",max);   
}