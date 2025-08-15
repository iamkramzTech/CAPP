#include <stdio.h>
// #include <stdlib.h>

//Function definition prototype declared it before use
int AddTwoNumbers(int firstNumber, int secondNumber);

int main()
{
    int firstNum, secondNum;
    
    printf("Enter First Number: ");
    scanf("%d", &firstNum);
    printf("Enter Second Number: ");
    scanf("%d", &secondNum);
    int sum = AddTwoNumbers(firstNum, secondNum); //calling the function
    printf("The sum of %d and %d is %d \n", firstNum, secondNum, sum);
    printf("Memory Address of sum variable: %p\n",&sum);
    return 0;
}

// using the Function
/// @brief 
/// @param firstNumber 
/// @param secondNumber 
/// @return  sum of two added Numbers
int AddTwoNumbers(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}