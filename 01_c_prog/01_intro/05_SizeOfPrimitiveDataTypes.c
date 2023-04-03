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
    printf("Size of char: %ld bytes\n", sizeof(char));
    printf("Size of short: %ld bytes\n", sizeof(short));
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of long: %ld bytes\n", sizeof(long));
    printf("Size of long long: %ld bytes\n", sizeof(long long));
    printf("Size of float: %ld bytes\n", sizeof(float));
    printf("Size of double: %ld bytes\n", sizeof(double));
    printf("Size of long double: %ld bytes\n", sizeof(long double));
    printf("Size of Bool: %ld bytes\n", sizeof(_Bool));
    
    return 0;
}

// Program End
