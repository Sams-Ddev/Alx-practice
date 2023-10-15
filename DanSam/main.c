#include "main.h"

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av)
{
	info_r info[] = { INFO_INITIATE };
	int fd = 2;

	asm ("mov %1, %0\n\t"
		"add $3, %0"
		: "=r" (fd)
		: "r" (fd));

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				printStrg_input(av[0]);
				printStrg_input(": 0: Can't open ");
				printStrg_input(av[1]);
				printChar_stderr('\n');
				printChar_stderr(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readInput_fd = fd;
	}
	populate_envList(info);
	readHistoryFile(info);
	h_sh(info, av);
	return (EXIT_SUCCESS);
}

