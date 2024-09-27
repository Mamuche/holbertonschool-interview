#include "sandpiles.h"

/**
 * add_grid - adds two 3x3 grids
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 */
void add_grid(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] += grid2[i][j];
		}
	}
}

/**
 * is_stable - check if a 3x3 grid is stable
 * @grid: 3x3 grid to check
 * Return: 1 if stable, 0 otherwise
 */
int is_stable(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
			{
				return (0);
			}
		}
	}
	return (1);
}

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 */
static void print_grid(int grid[3][3])
{
	int i, j;

	printf("=\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * sandpiles_sum - computes the sum of two sandpiles
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;
	int gridx[3][3];

	add_grid(grid1, grid2);

	while (!is_stable(grid1))
	{
		print_grid(grid1);

		/* Initialize the gridx to zero */
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				gridx[i][j] = 0;
			}
		}

		/* Check and topple the grid */
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (grid1[i][j] > 3)
				{
					grid1[i][j] -= 4;
					if (i - 1 >= 0)
						gridx[i - 1][j] += 1;
					if (i + 1 <= 2)
						gridx[i + 1][j] += 1;
					if (j - 1 >= 0)
						gridx[i][j - 1] += 1;
					if (j + 1 <= 2)
						gridx[i][j + 1] += 1;
				}
			}
		}
		/* Add the topples back to the original grid */
		add_grid(grid1, gridx);
	}
}
