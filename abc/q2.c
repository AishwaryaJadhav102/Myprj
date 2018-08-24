/*Q2]Program to alphabetize customer list
Problem Description:
Take an array of customer list 
and put all the customer in alphabetical order.
Problem Solution:
1.
Initialize the array of size 10
2.
Enter the name and contact number of all customers
3.
Order the customers in alphabetical order.
4.
Remove the customer with duplicated customer name.
Input
:
Customer list with their contact details
Output
:
Alphabetically ordered customer list.
*/

#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,count;
   char str[500][500],temp[500];
   puts("No of customers: ");
   scanf("%d",&count);

   puts("Enter Customer name and contact no: ");
   for(i=0;i<=count;i++)
      gets(str[i]);
   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("Customer list with their contact details:");
   for(i=0;i<=count;i++)
{	for(i=0;i<count;i++)
	{
		for(j=0;j<i;j++)
		{
			if(str[i]==str[j])
			break;
		}
	}
      puts(str[i]);
}
   
   return 0;
}
