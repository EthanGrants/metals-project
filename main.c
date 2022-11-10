/***********************************************************************************************************
 *Class:                     CSCI 112                                                                                                      *
 *Instructor:               Ronald Burgher                                                                                            *
 *Programmer:          Ethan Grant                                                                                                  *
 *Project:                  Metals Project                                                                                                *
 ************************************************************************************************************/

#include <stdio.h>

FILE *fp;

#define _CRT_SECURE_NO_WARNINGS

int main(void) {
 fp = fopen("csis.txt", "w");
  
    // Define the Variables
    double person = 1.76;
    double Aluminum = 168.48;
    double Copper = 559.87;
    double Gold = 1206.83;
    double Lead = 707.96;
    double Magnesium = 108.51;
    double Platinum = 1339.20;
    double Zinc = 445.30;
   
    // Print the objective
    printf("Weight of average person in various metals\n");
    fprintf(fp, "Weight of average person in various metals\n");
    printf("------------------------------------------\n");
    fprintf(fp, "------------------------------------------\n");
    
    // Print the conversions
    printf("Aluminum %15lf pounds\n", person*Aluminum);
    fprintf(fp, "Aluminum %15lf pounds\n", person*Aluminum);
    printf("Copper %17lf pounds\n", person*Copper);
    fprintf(fp, "Copper %17lf pounds\n", person*Copper);
    printf("Gold %20lf pounds\n", person*Gold);
    fprintf(fp, "Gold %20lf pounds\n", person*Gold);
    printf("Lead %20lf pounds\n", person*Lead);
    fprintf(fp, "Lead %20lf pounds\n", person*Lead);
    printf("Magnesium %14lf pounds\n", person*Magnesium);
    fprintf(fp, "Magnesium %14lf pounds\n", person*Magnesium);
    printf("Platinum %16lf pounds\n", person*Platinum);
    fprintf(fp, "Platinum %16lf pounds\n", person*Platinum);
    printf("Zinc %19lf pounds\n", person*Zinc);
    fprintf(fp, "Zinc %19lf pounds\n", person*Zinc);
    
    // Close out the txt file 
  fclose(fp);
    return 0;
}

