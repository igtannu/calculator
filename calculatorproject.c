#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int ans=0;
int add()
{system("cls");
    int num;
     printf("\nenter the number");
     scanf("%d",&num);
     ans=ans+num;
     return ans;
}
int sub()
{
    system("cls");
    int num;
     printf("enter the number");
     scanf("%d",&num);
     ans=ans-num;
     return ans;
}
int mul()
{
    system("cls");
     int num;
     printf("enter the number");
     scanf("%d",&num);
     ans=ans*num;
     return ans;
}
int dive()
{
    system("cls");
     int num;
     printf("enter the number");
     scanf("%d",&num);
     ans=ans/num;
     return ans;
}
int rem()
{
    system("cls");
     int num;
     printf("enter the number");
     scanf("%d",&num);
     ans=ans%num;
     return ans;
}
int percen()
{
    system("cls");
     int num;
     float m;
     ans=ans/100;
     return ans;
}
 void grtr()
 {
     system("cls");
      int a,b;
     printf("\n enter two numbers");
     scanf("%d %d",&a,&b);
     if(a>b)
        printf("%d is larger",a);
     else
        printf("%d is larger",b);
 }
 int powe()
 {
     system("cls");
      int num;
   printf("enter power");
     scanf("%d",&num);
     ans=pow(ans,num);
     return ans;
 }
 int power()
 {
     system("cls");
     int num,n;
     printf("enter base number");
     scanf("%d",&n);
   printf("enter power");
     scanf("%d",&num);
     ans=pow(n,num);
     return ans;
 }
void main()
{ char choose;
int num,m;
    do{ system("cls");
        printf("\nANSWER= %d",ans);
        printf("\nchoose an operation \n c.CLEAR \n +.ADD \n -.SUBTRACT \n *.MULTIPLY \n /.DIV \n r.REMAINDER \n p.PERCENTAGE \n <.COMPARE NO.S \n");
        printf(" ^.POWER \n e.EXIT");
        printf("\nchoose");
        scanf("%c",&choose);
        switch(choose)
        {
        case 'c':
            ans=0;
            break;
        case '+':
            ans=add();
           break;
        case '-':
            ans=sub();
            break;
        case '*':
            ans=mul();
            break;
        case '/':
            ans=dive();
            break;
        case '%':
            ans=rem();
            break;
        case 'r':
            ans=percen();
            break;
        case '<':
            grtr();
        case '^':
            do{
                    printf("\nANSWER= %d",ans);
                printf("\n 1.to get power on answer\n 2.to get power of new number\n3.to move above menu\n choose ");
                scanf("%d",&m);
                switch(m){
        case 1:
            ans=powe();
            break;
        case 2:
            ans=power();
            break;
            }}while(m!=3);
            break;

        }
    }while(choose!='e');
}
