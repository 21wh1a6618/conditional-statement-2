#include<stdio.h>
int main()
{ 
  printf("pick an item, price:\n1.pizza \n2.burger \n3.pasta \n4.french fries \n5.sandwich");
  int choice=0;
  scanf("%d",&choice);
  
  switch(choice)
  {

  
  case 1:
         printf("you pick pizza \n rs 239");
         break;
        case 2:
         printf("you pick burger \n rs 129");
         break; 
case 3:
         printf("you pick pasta \n rs 179");
         break;
         case 4:
         printf("you pick french fries \n rs 99");
         break;
         case 5:
         printf("you pick sandwich \n rs 149");
         break;
         default: printf("invalid choice");
}
}
