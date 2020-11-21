#include <stdio.h>
//WAP to calculate total and percentage of marks for phy,chem and math 

//formula: total_score = total_phy + total_chem + total_math
// obtained_total_score = obtained_phy + obtained_chem + obtained_math
//percentage = (obtained_total_score/total_score)*100

int main(){
    
    //declare variables
    float total_math, total_chem, total_phy,obtained_math, obtained_chem, obtained_phy,total_score,total_obtained_score,percentage;
    
    // thik about variables in memory
    
    //user input
    printf("calculate total and percentage of marks for Phy, chem and math :\n");
    printf("****************************************************************\n");
    
    printf("enter the total score for phy : ");
    scanf("%f",&total_phy);
    printf("enter the obtained score in phy : ");
    scanf("%f",&obtained_phy);
    
    printf("enter the total score for chem : ");
    scanf("%f",&total_chem);
    printf("enter the obtained score in chem : ");
    scanf("%f",&obtained_chem);
    
    printf("enter the total score for math : ");
    scanf("%f",&total_math);
    printf("enter the obtained score in math : ");
    scanf("%f",&obtained_math);
    printf("******************************************************************\n");
    
    //calculations
    //total for total and obtained total
    
    total_score = total_phy + total_chem + total_math;
    total_obtained_score = obtained_phy + obtained_chem + obtained_math;
    
    //percentage
    percentage = (total_obtained_score/total_score) * 100;
    
    //dispay output
    
    printf("\ntotal score for phy, chem and math is %f ",total_score);
    printf("\ntotal obtained score is %f ",total_obtained_score);
    printf("\nyou got %f%% marks",percentage);
    
}