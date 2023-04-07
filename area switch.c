#include<stdio.h>
int main()
{
	char shape;
	printf("CODES FOR FIND THE AREA OF VARIOUS SHAPE:-\n\n");
	printf("circle - c\ntriangle - t\ncylinder - y\nRectangle - r\n");
	printf("\nPLEASE ENTER CORRESPONDING CHARACTER OF YOUR SHAPE : ");
	scanf("%c",&shape);
	float rad,base,height,length,width,area;
	
	switch(shape)
	{
		case 'c':
			printf("\n\nEnter the radius of circle: ");
			scanf("%f",&rad);
			area=3.1428*rad*rad;
			printf("\nArea of circle is %f",area);
			break;
		case 't':
			printf("\n\nEnter the base length of triangle: ");
			scanf("%f",&base);
			printf("Enter the height of triangle: ");
			scanf("%f",&height);
			area=0.5*base*height;
			printf("\nArea of triangle is %f",area);
			break;
		case 'y':
			printf("\n\nEnter the radius of cylinder: ");
			scanf("%f",&rad);
			printf("Enter the height of cylinder: ");
			scanf("%f",&height);
			area=3.1428*rad*rad*height;
			printf("\nArea of cylinder is %f",area);
			break;
		case 'r':
			printf("\n\nEnter the length of rectangle: ");
			scanf("%f",&length);
			printf("Enter the width of rectangle: ");
			scanf("%f",&width);
			area=length*width;
			printf("\nArea of rectangle is %f",area);
			break;
			
		default:
			printf("\nPLEASE ENTER THE VALID CODE");
	}
	return 0;
}
