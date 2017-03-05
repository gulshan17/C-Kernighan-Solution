#include<stdio.h>
int main()
{
	float fahr,celcius;
	int lower, upper,step;
	lower=0;
	upper=300;
	step=20;
	
	celcius=lower;
	printf("celcius Fahrebheit\n");
	while(celcius<=upper)
	{
		fahr=((9.0/5.0)*celcius)+32;
		printf("%-10.0f %-11.1f\n",celcius,fahr);
		celcius+=step;
	}
	return 0;
}
