main()
{
int Wnum;
printf("Enter week number ");
scanf("%d",&Wnum);
switch (Wnum)
{
case 1:
    printf("Have nice Sunday ");
    break;
case 2:
    printf(" Have nice  Monday ");
    break;
case 3:
    printf("Have nice  Tuesday  ");
    break;
case 4:
    printf("Have nice  Wednesday ");
    break;
case 5:
    printf("Have nice  Thursday ");
    break;
case 6:
    printf("Have nice  Friday ");
    break;
case 7:
    printf("Have nice Saturday ");
    break;
    default:
    printf("Enter Valid Week number");
    break;

}
getch();
}