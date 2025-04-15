#include <stdio.h> 
#include <math.h>

double divison(double a, double b);
double modulus(int , int);
void Print_Menu();

int main()
{
    int choice;
    double first, second, result;
    while (1)
    {
        Print_Menu();
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }
            if(choice < 1 || choice > 7){
                fprintf(stderr, "Invalid Choice");
                continue;
            }

        printf("Enter the first number: ");
        scanf("%lf", &first);
        printf("Now, enter the second number: ");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1: // Add
            result = first + second;
            break;
        case 2: // Subtract
            result = first - second;
            break;
        case 3: // multiple
            result = first * second;
            break;
        case 4: // Division
            result = divison(first, second);
            break;
        case 5: // Modulus
            result = modulus(first, second);
            break;
        case 6: // Power
            result = pow(first, second);
            break;
        }
        if (!isnan(result))
        {
            printf("The result is: %.2f", result);
        }
    };

    return 0;
}
double divison(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invaild Argurment");
        return NAN;
    }
    else
    {
        return a / b;
    }
}
double modulus(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invaild Argurment");
        return NAN;
    }
    else
    {
        return a % b;
    }
}
void Print_Menu()
{
    printf("\n\n---------------------------------");
    printf("\nWelcome to the Simple Calculator");
    printf("\nChoose one of the options :");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\nEnter your choice: ");
}