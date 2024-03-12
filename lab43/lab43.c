# include <stdio.h>

void fill_and_delete (void);

int main (){

    fill_and_delete ();

}

void fill_and_delete (void){

   int i,delete;
   int numElements;
   printf ("enter the number of elements:\n");
   scanf ("%d",&numElements);

   int arr [numElements];
   printf ("enter the elements:\n");
   for (i= 0; i < numElements; ++i){
      printf ("element-%d: ",i+1);
      scanf ("%d",&arr[i]);
   }

   printf ("enter the position where to delete: ");
   scanf ("%d",&delete);
   for (i= delete-1;i< numElements-1; ++i){
        arr[i]= arr[i+1];
   }

   arr[numElements-1];

   for (i= 0; i < numElements-1; ++i){
       printf ("%d ",arr[i]);
   }
   printf ("\n");
}