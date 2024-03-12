# include <stdio.h>

void fill_and_count (void);

int main (){

    fill_and_count ();

}

void fill_and_count (void){
  
   int i;
   int j;
   int counter;
   int numElements;
   printf ("enter the number of elements:\n");
   scanf ("%d",&numElements);

   int arr [numElements];
   printf ("enter the the elements:\n");
   for (i= 0; i < numElements; ++i){
      printf ("element-%d: ",i+1);
      scanf ("%d",&arr[i]);
   } 

   for (i= 0; i < numElements; ++i){
        counter = 0;
        for(j= 0; j < numElements; ++j){
            if(arr[i] == arr[j]){
               counter++;
              }
        }
        printf("%d occurs %d times.\n",arr[i],counter);     
   }  
}