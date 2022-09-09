#include<stdio.h>
#include<math.h>

int main()
{

   int a,b,c,delta,x,x1,x2;
   printf("veuillez entrez les valeurs de a : ");
   scanf("%d",&a);
   printf("veuillez entrez les valeurs de b : ");
   scanf("%d",&b);
   printf("veuillez entrez les valeurs de c : ");
   scanf("%d",&c);
   delta = pow(b,2)-(4*a*c);

   if(delta<0)
     printf("l'equation n'admet pas un solution");

   else if (delta = 0){
    x =(-b)/(2*a);
    printf("la solution est : %.2f",&x);
}
	else {
		x1 = (-b - sqrt(delta)) / (2*a);
		x2 = (-b + sqrt(delta)) / (2*a);
		printf("le solution est: %.2f ,%.2f", x1,x2);
		}
   return 0 ;
}

