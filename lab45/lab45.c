# include <stdio.h>

void matrix (void);

int main (){

    matrix ();

}

void matrix (void){

    int numColums,numRows;
    int i,j;
    printf ("enter the number of columns:\n");
    scanf ("%d",&numColums);
    printf ("enter the number of rows:\n");
    scanf ("%d",&numRows);

    int arr2D [numRows][numColums];
    for(i=0; i< numRows; ++i){
        for(j=0; j< numColums; ++j){
            printf ("element-[%d],[%d]: ",i+1,j+1);
            scanf("%d",&arr2D[i][j]);           
        }
    }
    
    printf ("\nthe matrix is:\n");
    for(i=0; i< numRows; ++i){
        for(j=0; j< numColums; ++j){
            printf ("%d",arr2D[i][j]);         
        }
        printf("\n");
    }
}