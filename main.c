#include <stdio.h>
int main()
{

    float userNum, userNum2, result;
    printf("Please enter the two values here that's look like this( 4 2.5): ");
    scanf("%f", &userNum);
    scanf("%f", &userNum2);
    result = userNum + userNum2;
    printf("%2f + %2f \n ", userNum, userNum2, result);

    result = userNum - userNum2;
    printf("%2f - %2f \n ", userNum, userNum2, result);

    result = userNum * userNum2;
    printf("%2f * %2f \n ", userNum, userNum2, result);

    result = userNum / userNum2;
    printf("%2f / %2f \n ", userNum, userNum2, result);

    return 0;
}
