# include <stdio.h>

void swape_1 (int num1, int num2);
void swape_2 (int num1, int num2);
void swape_3 (int num1, int num2);

int main (){
    
    int num1,num2;
    printf("enter two numbers:\n");
    scanf("%d %d",&num1,&num2);

   // swape_1 (num1,num2);
   // swape_2 (num1,num2);
    swape_3 (num1,num2);


}

void swape_1 (int num1, int num2){
     int back_up;
     back_up = num1;
     num1 = num2;
     num2 = back_up;
     printf ("%d\n",num1);
     printf ("%d\n",num2);
}

void swape_2 (int num1, int num2){
     int swape = num1 ^ num2;
     printf ("%d\n",swape ^ num1);
     printf ("%d\n",swape ^ num2);
}

void swape_3 (int num1, int num2){
     num1= num1+num2;
     num2= num1-num2;
     num1= num1-num2;
     printf ("%d\n",num1);
     printf ("%d\n",num2);
}