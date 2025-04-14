#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to world of guessing\n");
    random = rand() % 100 + 1; // generating the number between 1 to 100
    

    

    do {
       printf("\nplease enter your guess between (1 to 100) = ");
        scanf("%d", &guess);
       no_of_guess++;
        
        if (guess < random){
            printf("Guess a larger number. \n");
        }else if (guess > random){
            printf("Guess a smaller number. \n");
       }else {
        printf("congratulation !!!! Your guess is correct in %d attempts" , no_of_guess);
        
    }

        

    } while (guess != random);
       printf("\n Thanks for playing");
       printf("\n Developed by: Shivam Sharma");
       return 0;
}
