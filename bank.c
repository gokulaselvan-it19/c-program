#include<stdio.h>

int amount=10000, deposit, withdraw;

int choice, pin, k;

char transaction ='y';

void main()

{

while (pin != 7979)

{

printf("ENTER YOUR PIN NUMBER:");

scanf("%d", &pin);

if (pin != 7979)

printf("PLEASE ENTER VALID PASSWORD\n");

}

do

{

printf("\n\n1. Check Balance\n");

printf("2. Withdraw Cash\n");

printf("3. Deposit Cash\n");

printf("4. Quit\n");

printf("Enter your choice: ");

scanf("%d", &choice);

switch (choice)

{

case 1:

printf("\n YOUR BALANCE IN Rs : %d ", amount);

break;

case 2:

printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

scanf("%d", &withdraw);

if (withdraw % 100 != 0)

{

printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

}

else if (withdraw >(amount - 500))

{

printf("\n INSUFFICENT BALANCE");

}

else

{

amount = amount - withdraw;

printf("\n YOUR CURRENT BALANCE IS:%d", amount);

}

break;

case 3:

printf("\n ENTER THE AMOUNT TO DEPOSIT:");

scanf("%d", &deposit);

amount = amount + deposit;

printf("YOUR BALANCE IS: %d", amount);

break;

case 4:

printf("\n THANK U. ");

break;

default:

printf("\n INVALID CHOICE");

}

fflush(stdin);

scanf("%c", &transaction);

if (transaction == 'n'|| transaction == 'N')

k = 1;

} while (!k);

printf("\n\n THANKS FOR USING....QUITING");

}

