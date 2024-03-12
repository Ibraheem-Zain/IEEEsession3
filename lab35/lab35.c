# include <stdio.h>

void fill_and_sum (void);

int main (){

    fill_and_sum ();
    return 0;
}

void fill_and_sum (void){

   int i;
   int sum = 0;
   int numElements;
   printf ("enter the number of elements:\n");
   scanf ("%d",&numElements);

   int arr [numElements];
   printf("enter the elements:\n");
   for (i= 0; i < numElements; ++i){
      printf ("element-%d: ",i+1);
      scanf ("%d",&arr[i]);
   } 
   
   for (i= 0; i < numElements; ++i){
       sum = sum + arr[i];
   }

   printf ("Sum of all elements stored in the array is: %d\n",sum);

}