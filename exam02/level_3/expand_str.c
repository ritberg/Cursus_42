#include "unistd.h"

int	main(int argc, char **argv)
{
	int	i;
	int	yes;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				yes = 1;
			else
			{
				if (yes)
					write(1, "   ", 3);
				write(1, &argv[1][i], 1);
				yes = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}