#include <stdio.h>
int main()
{
    int n, sum = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%i", &n);
        sum += n;
    } while (n != 0);
    printf("Sum is = %d\n", sum);

    int num, index = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < num);

    return 0;
}