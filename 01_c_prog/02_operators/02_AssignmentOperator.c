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

#include <stdio.h>

int main() {
    int a ,b;
    printf("enter two values");
    scanf("%d%d",&a,&b);

    
    a = b;
    printf("a = %d\n", a);

    
    a += b;
    printf("a += b: %d\n", a);

    
    a -= b;
    printf("a -= b: %d\n", a);

    
    a *= b;
    printf("a *= b: %d\n", a);

    
    a /= b;
    printf("a /= b: %d\n", a);

    return 0;
}

// Program End
