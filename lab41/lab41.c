# include <stdio.h>

void search (void);

int main (){

    search ();

}

void search (void){

    int flag=0;
    int num,i;
    printf("enter a number to search about:\n");
    scanf("%d",&num);
    int arr []={1,2,3,4,5,6};

    for (i=0; i <6;++i){
        if (num == arr [i]){
            flag =1;
            break;
        }
    } 

    if (flag ==1){
        printf ("the number is in the array\n");
        printf ("the number's order is %d\n",i+1);
    } 
    else {
        printf ("the number  is not exsit\n");
    }  

}   