#include<stdio.h>
#include<stdlib.h>



void main()
{
int n,p,b,bill=0;
int a=1;
printf("Welcome to The Super Market.\nToday we have the following products .\n");
while(a)
{
printf("Choose Your Product : \n1.Product A\n2.Product B\n");
scanf("%d",&p);
switch(p)
{
case 1 : printf("Choose the brand :\n1.Brand A : Rs.130\n2.Brand B: Rs.145\n3.Brand C : Rs.155\n");
         scanf("%d",&b);
         if(b==1)
         { 
		 printf("Enter the No. of Products : \n");
         scanf("%d",&n);
         printf("Brand A has been added to cart.\n");
         bill=bill+(n*130);
         }
         else if(b==2)
         { 
		 printf("Enter the No. of Products : \n");
         scanf("%d",&n);
         printf("Brand B has been added to cart.\n");
         bill=bill+(n*145);
         }
         else if(b==3)
         { 
		 printf("Enter the No. of Products : \n");
         scanf("%d",&n);
         printf("Brand C has been added to cart.\n");
         bill=bill+(n*155);
         }
         else 
		 printf("Invalid Input\n");
         break;
case 2 : printf("Choose the brand :\n1.Brand R : Rs.43\n2.Brand V : Rs.36\n");
         scanf("%d",&b);
         if(b==1)
         { 
		 printf("Enter the No. of Products : \n");
         scanf("%d",&n);
         printf("Brand R has been added to cart.\n");
         bill=bill+(n*43);
         }
         else if(b==2)
         {
		 printf("Enter the No. of Products : \n");
         scanf("%d",&n);
         printf("Brand V has been added to cart.\n");
         bill=bill+(n*36);
         }
         else
		 printf("Invalid Input\n");
         break;
default : printf("Invalid Input\n");
};
printf(" Choose an Operation :\n1.Continue Shopping\n2.Display Bill and Total Amount\n");
scanf("%d",&a);
if(a==2)
a=0;
};
printf("Bill Amt : Rs.%d\n.Applying Taxes of 10% : %f\nTotal Amount Inclusive of Taxes :
Rs.%f\n",bill,.1*bill,bill+(.1*bill));
printf("Thank You for Shopping with us!\nPlease Do Visit Again!\n");
}