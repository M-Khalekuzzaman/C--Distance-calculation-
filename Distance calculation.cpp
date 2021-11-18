#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int x1,x2,y1,y2;
    double area;
    printf("Enter your(x1,y1) value is :");
    scanf("%d%d",&x1,&y1);
      printf("Enter your(x2,y2) value is :");
    scanf("%d%d",&x2,&y2);

    area = ((x1-x2)*(x1-x2)) +((y1-y2)*(y1-y2));
    printf("Distance between two point : %.4lf\n",sqrt(area));
    getch();


}
