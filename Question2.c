
main()
{
    while(1)
    {
int num,a,b;
printf("Enter 1 Addition \n");
printf("Enter 2 Subtraction \n");
printf("Enter 3 Multiplication \n");
printf("Enter 4 Division \n");

scanf("%d \n",&num);
printf("Enter two number "); // kuch ajib ara output me ans ke sath
scanf("%d%d",&a);
switch(num)
{
    case 1:
    printf("Addition of %d and %d is %d", a,b,a+b);
    break;
    case 2:
    printf("Subtraction of %d and %d is %d", a,b,a-b);
    break;
    case 3:
    printf("Multiplication of %d and %d is %d", a,b,a*b);
    break;
    case 4:
    printf("Division of %d and %d is %d", a,b,a/b);
    break;
     default:
    printf("EXIT");
    break;
}

getch();
}
}