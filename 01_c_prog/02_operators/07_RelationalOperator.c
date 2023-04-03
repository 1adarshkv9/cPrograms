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
    int a,b;
    printf("enter two values\n");
    scanf("%d%d",&a,&b);
    if (a > b) {
        printf("The value of a is greater than b\n");
    } else if (a < b) {
        printf("The value of b is greater than a\n");
    } else {
        printf("The values of a and b are equal\n");
    }
    return 0;
}


// Program End
