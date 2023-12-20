#include <stdio.h>
int main()
{int a;
printf("enter your grade: ");
scanf("%d",&a);
if (a>90)
{
    printf("you grade is A.");
    }
else if (a>80 && a<90)
{
    printf("your grade is B.");
}
else if (a>70 && a<80)
{printf("your grade is C.");
}
else if (a>60 && a<70)
{printf("your grade is D.");
}
else if (a>50 && a<60)
{
    printf("your grade is E.");
}
else
{
    printf("your grade is F.");
    }
}