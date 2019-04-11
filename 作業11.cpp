#include <stdio.h> 
#include <stdlib.h> 

int main()
{

int x,y,z; 
int MAX,Median,min; 

printf("½Ð¿é¤J3­Ó­È:\n"); 
printf("x="); scanf("%d",&x); 
printf("y="); scanf("%d",&y); 
printf("z="); scanf("%d",&z); 

x > y ? (MAX = x, min = y) : (MAX = y, min = x); 
z > MAX ? (Median =MAX, MAX = z) : 
z > MAX ? Median = z : (Median = min, min = z); 

printf("MAX:%d Median:%d min:%d\n", MAX, Median, min); 

system("PAUSE"); 
return 0; 
}
