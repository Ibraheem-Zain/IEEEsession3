# include <stdio.h>

void fill_and_reverse (void);

int main (){

 fill_and_reverse ();

}

void fill_and_reverse (void){

   int i;
   int numElements;
   printf ("enter the number of elements:\n");
   scanf ("%d",&numElements);

   int arr [numElements];
   printf ("enter the elements:\n");
   for (i= 0; i < numElements; ++i){
      printf ("element-%d: ",i+1);
      scanf ("%d",&arr[i]);
   }

   printf ("the values stored into the array are:\n");
   for (i= 0; i < numElements; ++i){
      printf ("%d ",arr[i]);
   }

   printf ("\n");

   printf ("the values stored into the array in reverse are:\n");
   for (i= numElements-1; i >= 0; --i){
       printf ("%d ",arr[i]);
   }

   printf ("\n");
   
}