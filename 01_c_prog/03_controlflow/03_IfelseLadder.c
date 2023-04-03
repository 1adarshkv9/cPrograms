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
 * Author: Natarajan S  ( natarajan.s@ruggedboard.com )
 * Title: Program Manager / Trainner
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

int main() {
    int num1, num2, num3, num4, max;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4) {
        max = num1;
    } else if (num2 > num1 && num2 > num3 && num2 > num4) {
        max = num2;
    } else if (num3 > num1 && num3 > num2 && num3 > num4) {
        max = num3;
    } else {
        max = num4;
    }

    printf("The greatest number is %d\n", max);

    return 0;
}


// Program End
