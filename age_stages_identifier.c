#include<stdio.h>
int main()
{
	int age_var;
	printf("Enter your age :");
	scanf("%d",&age_var);

	if (age_var==0 || age_var==1){
		printf("You are baby or infant");
	}
	else if (age_var>=2 && age_var<=4){
		printf("Toddler");
	}
	else if (age_var>=5 &&age_var<=12){
		printf("Child");
	}
	else if (age_var>=13 &&age_var<=19){
		printf("Teen");
	}
	else if (age_var>=20 && age_var<=39){
		printf("adult");
	}
	else if (age_var>=40 && age_var<=59){
		printf("Middle age adult");
	}
	else if (age_var>=60){
		printf("Senior adult");
	}
	else {
		printf("Invalid input");
	}
	return 0;
}

