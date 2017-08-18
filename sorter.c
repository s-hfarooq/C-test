#include <stdio.h>
main()
{
	int array[1000];
	int amount, numbers, done, num1;

	printf("Number of digits?\n");
	scanf("%d", &amount);
	printf("Numbers?\n");


	numbers = 0;
	while(numbers < amount)
	{
		numbers++;
		scanf("%d", &array[numbers]);
	}

	numbers = 0;
	while(numbers < (amount - 1))
	{
		numbers++;
		done = 0;
		while(done < amount - numbers)
		{
			done++;
			if(array[done] > array[done + 1])
			{
				num1 = array[done];
				array[done] = array[done + 1];
				array[done + 1] = num1;
			}
		}
	}

	printf("\n\nNumbers in order:\n");
	numbers = 0;
	while(numbers < amount)
	{
		numbers++;
		printf("%d\n", array[numbers]);
	}

	printf("\n\n\n");
}
