# include<stdio.h>
int main()
{
    double value;

    printf("Enter a value: ");
    scanf("%lf", &value);

    if (value <= 0.0)
    {
        if (value == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative value.");
    }
    else
        printf("You entered a positive value.");
    return 0;
}
