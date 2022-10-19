 
 main()
{

printf("Enter 1 To check numbes is length of isosceles triangle or not \n");
printf("Enter 2 To check numbes is length of sides of a right triangled triangle or not  \n");
printf("Enter 3 To check numbes is length of Equilateral triangle or not  \n");

int num,a,b,c;
scanf("%d \n",&num);

scanf("%d%d%d",&a,&b,&c);
switch(num)
{
    case 1:
      (a==b||b==c||a==c)? printf("Isosceles triangle" ):printf("Not an Isosceles triangle");
    break;

    case 2:
      if((b*b+c*c)==(a*a)||(a*a+c*c)==(b*b)||(a*a+b*b)==(c*c))
        printf("reight angled triangle ");
    else
        printf("Not a reight angled triangle ");
    break;
   
    case 3:
      if(a==b&&a==c)
        printf("Equilateral triangle ");
    else
        printf("Not a Equilateral triangle");
    break;

    default:
        printf("EXIT");
    break;
 
}
getch();
}