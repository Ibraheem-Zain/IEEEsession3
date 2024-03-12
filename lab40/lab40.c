# include <stdio.h>

void order (void);

int main (){

    order ();

}

void order (void){
    int i,j;
    int numElement;
    printf ("enter the number of elements:\n");
    scanf ("%d",&numElement);

    int arr[numElement];
    printf ("enter the elements:\n");
    for (i=0; i<numElement; ++i){
        printf ("element-%d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < numElement-1; ++i){
        for (j=0; j < numElement-1; ++j){
            if ( arr [j]>arr [j+1]){
                arr [j+1]= arr [j]^arr [j+1];
                arr[j]= arr [j]^arr [j+1];
                arr [j+1]=arr[j]^arr [j+1];
            }
        }
    }

    printf("the right order is: ");
    for (i= 0; i < numElement; ++i){
        printf("%d ",arr[i]);
    }
}