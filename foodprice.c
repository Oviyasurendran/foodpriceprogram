#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter a menu number of your choice from 1 to 5:");
scanf("%d",&n);
switch(n)
{
case 1:
printf("Food item: Pizza\n");
printf("Cost: Rs.239");
break;
case 2:
printf("Food item: Buger\n");
printf("Cost: Rs.129");
break;
case 3:
printf("Food item: Pasta\n");
printf("Cost: Rs.179");
break;
case 4:
printf("Food item: French Fries\n");
printf("Cost: Rs.99");
break;
case 5:
printf("Food item: Sandwich\n");
printf("Cost: Rs.149");
break;
default:
printf("Uhoh!Enter a valid choice");
}
return 0;
}

