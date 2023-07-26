# Credit Card Validator

This program is designed to check the validity of credit card numbers and determine their issuer using Luhn's Algorithm.

## Introduction

A credit (or debit) card is a plastic card used to pay for goods and services. Credit card numbers have a specific structure, and they include a checksum to detect typos and errors. Luhn's Algorithm, invented by Hans Peter Luhn of IBM, is used to determine if a credit card number is syntactically valid.

## Luhn’s Algorithm

Luhn's Algorithm is used to validate credit card numbers. Here's how it works:

1. Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
2. Add the sum to the sum of the digits that weren’t multiplied by 2.
3. If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!

## How the Program Works

1. The program prompts the user to input a credit card number.
2. It calculates two checksums according to Luhn's Algorithm:
   - `checksum1`: This is the sum of every other digit multiplied by 2, starting with the number's second-to-last digit.
   - `checksum2`: This is the sum of the digits that weren't multiplied by 2.
3. The program then finds the issuer by checking the first few digits of the credit card number and the total sum of the checksums.
4. If the total sum ends in 0 (i.e., modulo 10 is congruent to 0), the number is valid. Otherwise, it is invalid.


## Supported Card Issuers

The program can identify and validate credit cards from the following issuers:

- American Express (AMEX): Numbers starting with 34 or 37, and having a length of 15 digits.
- MasterCard: Numbers starting with 51, 52, 53, 54, or 55, and having a length of 16 digits.
- Visa: Numbers starting with 4, and having a length of either 13 or 16 digits.

## How to Use the Program

1. Compile the program using a C compiler.
2. Run the compiled executable.
3. Enter the credit card number when prompted.
4. The program will display the card issuer if the number is valid; otherwise, it will show "INVALID."

Feel free to use and modify this code as needed for your projects!

