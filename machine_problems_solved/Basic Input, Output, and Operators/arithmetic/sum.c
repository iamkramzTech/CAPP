#include <stdio.h>
#include <stdlib.h>

// Function prototype declaration it before use
int AddTwoNumbers(int firstNumber, int secondNumber);
int GetNumber(const char *prompt);
void Run();
void DisplayEvenOdd(int num);
int main()
{
    Run();

    return 0;
}

void Run()
{
    int first = GetNumber("Enter First Number: ");
    DisplayEvenOdd(first);

    int second = GetNumber("Enter Second Number: ");
    DisplayEvenOdd(second);

    int sum = AddTwoNumbers(first, second); // calling the function
    printf("The sum of %d and %d is %d \n", first, second, sum);
    printf("Memory Address of sum variable: %p\n", (void*)&sum);
   
}

// Defining a  Function to AddTwo Numbers
/// @brief
/// @param firstNumber
/// @param secondNumber
/// @return  sum of two added Numbers
int AddTwoNumbers(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}
/// @brief Function to get a number from user
/// @param prompt
/// @return
int GetNumber(const char *prompt)
{
    int num;
    printf("%s", prompt);
    scanf("%d", &num);
    return num;
}

/// @brief Display Even or Odd
/// @param num 
void DisplayEvenOdd(int num)
{
   printf(num % 2 != 0 ? "Odd\n" : "Even\n");
}