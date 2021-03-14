#include<stdio.h>

int factorial(int a);
int fibonnaci(int a);

int main(){
    int a;
    char choice; 

    printf("Fibonnaci(F) or Factorial(f) : ");
    scanf(" %c", &choice);

    if (choice == 'f'){
        printf("Give a number to find its factorial : ");
        scanf("%d", &a);

        printf("The value of factorial %d is %d", a, factorial(a));
    }
    else{
        printf("Give a number to find the number at its index in the fibonnaci series. (Here indexing starts from 0) : ");
        scanf("%d", &a);
        printf("The number at index %d is %d", a, fibonnaci(a));
    }
    return 0;
}

int factorial(int a){
    if (a==1 || a==0){
        return 1;
    }
    else{
        return factorial(a - 1) * a;
    }
}

int fibonnaci(int a){
    if (a==0)
    {
        return 0;
    }
    else if (a==1)
    {
        return 1;
    }
    else{
        return fibonnaci(a - 1) + fibonnaci(a - 2);
    }
    
    
}