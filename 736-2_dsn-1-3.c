#include<math.h>
#include<stdio.h>

int main (void) {

	int x,y,c;
	printf("Vedite chislo i stepeny v kotoroy on budet ");
	scanf("%d%d",&x,&y);
	c=pow(x,y);
	printf("Otvet = %d",c);
	getchar();getchar();
return 0;
}
