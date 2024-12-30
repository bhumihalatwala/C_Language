#include <stdio.h>
#include <conio.h>

//menu driven program using nested switch case
main()
{
  int choice,type;
  clrscr();

  printf("Press 1 for English\n");
  printf("Press 2 for Hindi\n");
  printf("Press 3 for Gujarati\n");
  printf("Enter your choice: ");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1:
    printf("Press 1 for Internet recharge\n");
    printf("Press 2 for Top-up recharge\n");
    printf("Press 3 for Special recharge\n");
    printf("Enter your recharge type: ");
    scanf("%d",&type);
     switch(type)
     {
       case 1:printf("You have succesfully done an Internet recharge\n");
       break;
       case 2:printf("You have succesfully done a Top-up recharge\n");
       break;
       case 3:printf("You have succesfully done a Special recharge\n");
       break;
       default: printf("Invalid Choice...");
     }
    break;

    case 2:
    printf("Internet recharge ke liye 1 dabaiye\n");
    printf("Top-up recharge ke liye 2 dabaiye\n");
    printf("Special recharge ke liye 3 dabaiye\n");
    printf("Apna recharge darj kare: ");
    scanf("%d",&type);
     switch(type)
     {
       case 1:printf("Aapne safaltapurvak Internet recharge kar liya hai\n");
       break;
       case 2:printf("Aapne safaltapurvak Top-up recharge kar liya hai\n");
       break;
       case 3:printf("Aapne safaltapurvak Special recharge kar liya hai\n");
       break;
       default: printf("Aap ka uttar maanya nahi hai...");
     }
    break;

    case 3:
    printf("Internet recharge mate 1 dabavo\n");
    printf("Top-up recharge mate 2 dabavo\n");
    printf("Special recharge mate 3 dabavo\n");
    printf("Tamaru recharge dakhal karo: ");
    scanf("%d",&type);
     switch(type)
     {
       case 1:printf("Tame safaltapurvak Internet recharge karyu chhe\n");
       break;
       case 2:printf("Tame safaltapurvak Top-up recharge karyu chhe\n");
       break;
       case 3:printf("Tame safaltapurvak Special recharge karyu chhe\n");
       break;
       default: printf("Tamaro javab maanya nathi...");
     }
    break;
  }

  getch();
}