// A program to check credit card validity and issuer
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long num, checksum1, checksum2, temp1, temp2, temp3, seclast_num, last_num, first_num, foo;
    checksum1 = 0;
    int sum = 0, count = 0;

    // Getting input number from user
    num = get_long("Number: ");
    temp1 = num;
    // To calculate sum from second to last digit - luhn algo
    while (temp1 > 0)
    {
        seclast_num = (temp1 / 10) % 10;
        seclast_num = seclast_num * 2;
        if (seclast_num > 9)
        {
            checksum1 = checksum1 + (seclast_num % 10) + (seclast_num / 10);
        }
        else
        {
            checksum1 = checksum1 + seclast_num;
        }

        temp1 = temp1 / 100;
    }

    temp2 = num;
    checksum2 = 0;
    // To calculate sum of numbers not multiplied by 2
    while (temp2 > 0)
    {

        last_num = temp2 % 10;
        checksum2 = checksum2 + last_num;

        temp2 = temp2 / 100;

    }


    temp3 = num;
    // Finding the first digit and no. of digits
    while (temp3 > 0)
    {
        first_num = temp3 % 10;
        temp3 = temp3 / 10;
        count++;
    }

    // Finding the first two digits
    while (num >= 100)
    {
        foo = num / 10;
        num = num / 10;
    }
    sum = checksum1 + checksum2;
    // This condition checks validity of luhn's algo
    if (sum % 10 == 0)
    {
        if ((foo == 34 || foo == 37) && (count == 15))
        {
            printf("AMEX\n");
        }
        else if ((count == 16) && (foo == 51 || foo == 52 || foo == 53 || foo == 54 || foo == 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((count == 13 || count == 16) && first_num == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    // If luhn algo doesn't satisfy
    else
    {
        printf("INVALID\n");
    }



}
