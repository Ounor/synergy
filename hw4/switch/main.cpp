#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int dayNumber;

    printf("Input day number ");
    
    scanf("%i", &dayNumber);
    
    switch (dayNumber)
    {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday ");
      break;
    case 3:
      printf("Wednesday ");
      break;
    case 4:
      printf("Thursday ");
      break;
    case 5:
      printf("Friday ");
      break;
    case 6:
      printf("Saturday ");
      break;
    case 7:
      printf("Sunday ");
      break;

    default:
      printf("Error. Wrong day format");

      break;
    }

}