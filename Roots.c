

#include <stdio.h>
#include <math.h>
 
 main()
{
    int i,n,number;
 	float a,b,result;
 	
    printf("Enter the value: ");
    scanf("%d",&n);
    while (n<=0)//loops until positive number is entered
    	{
		printf("Enter a Positive Number!\n");
    	scanf("%d",&n);}
    	
    	
 
    printf("No.      Square Root      Cubed Root\n",a,n,b,i);//These will display on the top of each column
    result = cbrt(n);
	b=n*n*n;//Start of the calculations
	for(i=1;i<=n;i++)
    
    {
        printf("%d \t     %.2f \t     %.2f \t \n",i,sqrt((double)i),cbrt((double)i),n);
    }
     
    return 0;
}
//This program converts whatever number is enetered and give the proper square and cubed roots of said number.

