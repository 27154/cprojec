 #include <stdio.h>


#define INCHES_PER_POUND 166

int box() {
 int height, length, width, volume, weight;
 printf("Enter height of box:  ");
 scanf("%d", &height);
 printf("Enter the length of the box:  ");
 scanf("%d", &length);
 printf("Enter the width of box:  ");
 scanf("%d", &width);
 volume = height * length * width;
 weight = (volume +165)/ INCHES_PER_POUND;

 printf("Volume(cubic inches): %d\n", volume);
 printf("Dimensional Weight %d\n", weight);

 return 0;
}

int main() {
 box();
}