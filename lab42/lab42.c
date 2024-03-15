# include <stdio.h>

void convert_to_binary (void);

int main (){

    convert_to_binary ();

}

void convert_to_binary (void){
    int remainder,number,num;
    int i= 0;
    int counter= -1;
    int arr [32]={0};
    printf ("enter a number:\n");
    scanf ("%d",&number);
    num= number;

    while (number != 0){
         if (number % 2 == 0){
             arr[i]=0;
         }
         else {
            arr[i]=1;
         }
         ++counter;
         ++i;
         number = number / 2;
    }

if (num > 0){
    printf ("your number in binary is: ");
    for (i=counter; i >= 0; --i){
        printf ("%d",arr[i]);
    }
    printf ("\n");
}
else{
    printf ("your number in binary is: -");
    for (i=counter; i >= 0; --i){
        printf ("%d",arr[i]);
    }
    printf ("\n");
}
}