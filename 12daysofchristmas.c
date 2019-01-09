#include <stdio.h>

int	main()
{
	int	gifts[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (int day = 1; day <= 12; day++)
	{
		for (int a = 1; a <= day; a++)
			gifts[a - 1] += a;
	}

	printf("%d partridges in a pear tree\n", gifts[0]);
	printf("%d turtle doves\n", gifts[1]);
	printf("%d French hens\n", gifts[2]);
	printf("%d calling birds\n", gifts[3]);
	printf("%d golden rings\n", gifts[4]);
	printf("%d geese a-laying\n", gifts[5]);
	printf("%d swans a-swimming\n", gifts[6]);
	printf("%d maids a-milking\n", gifts[7]);
	printf("%d ladies dancing\n", gifts[8]);
	printf("%d lords a-leaping\n", gifts[9]);
	printf("%d pipers piping\n", gifts[10]);
	printf("%d drummers drumming\n", gifts[11]);
}
