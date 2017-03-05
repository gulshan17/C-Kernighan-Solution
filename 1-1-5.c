#include<stdio.h>
int main()
{
	float fahr,celcius;
	int lower, upper,step;
	lower=0;
	upper=300;
	step=20;
	
	fahr=upper;
	printf("Fehrenheit Celcius\n");
	while(fahr>=lower)
	{
		celcius=(5.0/9.0)*(fahr-32.0);
		printf("%-10.0f %-11.1f\n",fahr,celcius);
		fahr-=step;
	}
	return 0;
}
