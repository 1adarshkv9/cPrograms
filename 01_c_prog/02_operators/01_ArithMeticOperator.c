/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: 
 * Title:
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

   
    printf("%d + %d = %d\n", num1, num2, num1 + num2);

    
    printf("%d - %d = %d\n", num1, num2, num1 - num2);

    
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    
    if (num2 != 0) {
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
    } else {
        printf("Cannot divide by zero\n");
    }

    
    if (num2 != 0) {
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Cannot compute modulus when divisor is zero\n");
    }
    

    printf("1st integer incremented by 1 is %d\n",  ++num1);
    printf("2nd integer incremented by 1 is %d\n", ++num2);

    
    printf("decremented by 1 is %d\n", --num1);
    printf("decremented by 1 is %d\n", --num2);

    
    return 0;
}
// Program End
