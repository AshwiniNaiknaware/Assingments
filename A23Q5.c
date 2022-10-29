#include <stdio.h>
void Display(char ch)
{
    if (((ch >= 65) && (ch <= 90)) || ((ch >= 65) && (ch <= 90)))
    {
        printf("Decimal\n");
        printf("%d\n", ch);

        printf("Octal\n");
        printf("%o\n", ch);

        printf("HexaDecimal\n");
        printf("%x\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the charachter\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}