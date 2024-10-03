//program to calculate library fine charges
/*
program to calculate library fine charges
Author:Saeed khalid;
Reg No:CT102/G/22699/24;
Date:1/10/2024;
*/

#include <stdio.h> 
int main() {

	int BookID;
	int DueDate;
	int ReturnDate;
	int DayOverdue;
	int FineRate;
	int FineAmount;
	
	printf("Enter BookID:");
	scanf("%d", &BookID);
	
	printf("Enter Due Date:");
    scanf("%d", &DueDate);

     printf("Enter Return Date:");
     scanf("%d" , &ReturnDate);
     
     if(ReturnDate > DueDate) {
     	DayOverdue = ReturnDate - DueDate;
	 } else {
	 	DayOverdue = 0;
	 }
	 	if(DayOverdue > 0 && DayOverdue <= 7) {
	 	FineRate = 20;
		 } else if(DayOverdue > 8 &&DayOverdue <= 14) {
		 	FineRate = 50;
		 } else if(DayOverdue>=15);{
		 	FineRate = 100;	 	
		 }
		    
		  {
		  	 FineRate = 0;
		  }
	 FineAmount = DayOverdue * FineRate;
	 printf("The Fine Amount = %d\n",FineAmount);
	 
	 return 0;
}