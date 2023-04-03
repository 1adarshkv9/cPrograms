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
/****************************************************************/


#include <stdio.h>

// Main Function
int main()
{
     char name[100];
     int roll;
     float cgpa;
     printf("\nenter the name:");
     scanf("%s",name);
     printf("\nenter the roll number:");
     scanf("%d",&roll);
     printf("\nenter the cgpa:");
     scanf("%f",&cgpa);
     printf("name: %s\nroll number: %d\n cgpa: %.2f",name,roll,cgpa);
     return 0;
}

// Program End
