/*Write a program which asks you to input your student number (XXXXXXX) and then presents you with 
a menu for the following operations (by inputting a number the corresponding activity is executed): 
1. Write the number back to you in reverse order 
2. Asks you to state a digit number n, then prints the nth character of the student number 
3. Asks you for a particular character and tells you if it is found in the student number 
4. Quit 
After each operation (except ‘quit’), the program goes back to the main menu.*/

#include <stdio.h>

int menu, n, reverse = 0, SID, tempSID, p;

int valueinarray(int val, int *arr,int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == val)
        {
            printf("Number found a position: %d", i+1);
            return 0;        
        }
        else if(i == n-1)
        {
            printf("Number %d is not found",p);
            return 0;
        }
    }
}

int main()
{
    printf("Input student number:");
    scanf("%u", &SID);
    // for all the below operations, it is essential to have an array rathern an an interger so let's convert:
    //  Step 1: find out how many numbers in SID:
    tempSID = SID;
    while (tempSID != 0)
    {
        tempSID /= 10;
        n++;
    }
    // Step 2: create array
    int SIDArray[n + 1];
    // Step 3: store in array
    for (int i = n - 1; i >= 0; i--)
    {
        SIDArray[i] = SID % 10;
        SID = SID / 10;
    }
    
    while(1)
{
    printf("\n\nEnter operation\nEnter 1 for the number back to you in reverse order\nEnter 2  to state a digit number n, then prints the nth character of the student number\nEnter 3 u for a particular character and tells you if it is found in the student number \nEnter 4 to quit\n");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1: // reverse
        printf("\nPrinting SID in reverse:");
        for (int i = n - 1; i >= 0; i--)
        {printf("%d", SIDArray[i]);}
        break;

    case 2: // specificCharacter
        printf("\nWhich position do you require (first number would be known as position 1): ");
        scanf("%d", &p);
        printf("Character at position %d is:%d", p, SIDArray[p - 1]);
        break;

    case 3: // existCharacter
        printf("\nWhich number do you want to check?");
        scanf("%d", &p);
        valueinarray(p, &SIDArray,n);
        break;

    case 4: // end program
        return 0;
        break;
    }
}
}