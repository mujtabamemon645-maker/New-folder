# include <stdio.h>
int main(){ 
int Age, Income, Credit_score;
char Existing_loan[3];


 printf("Enter Age: ");
 scanf("%d", &Age); 
 printf("Enter Income: ");
 scanf("%d", &Income);
 printf("Enter Credit Score: ");
 scanf("%d", &Credit_score);
 printf("Do you have any existing loan? (Yes/No): ");
 scanf("%s", Existing_loan);

 if(Age >= 21 && Income >= 100000 && Credit_score >= 750 && (Existing_loan[0] == 'N' || Existing_loan[0] == 'n')) {
     printf("High Approval CHnce\n");
 } elseif(Age >= 21 && Income >= 75000 && Credit_score >= 650 && (Existing_loan[0] == 'Y' || Existing_loan[0] == 'y')) {
     printf("Manual Review\n");
 } elseif(Age >= 21 && Income >= 50000 && Credit_score >= 600) {
     printf("Possibly Eligible\n");
 } else {
     printf("Rejected\n");

 
  
 }
 return 0;
}
  
 
