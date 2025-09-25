#include "flood_fill.h"

void fill(char **tab, t_point size, char target, int y, int x)
{
    if (y < 0 || x < 0 || y >= size.y || x >= size.x)
        return;
    if (tab[y][x] == 'F' || tab[y][x] != target)
        return;
    tab[y][x] = 'F';

    fill(tab, size, target, y - 1, x);
    fill(tab, size, target, y + 1, x);
    fill(tab, size, target, y, x - 1);
    fill(tab, size, target, y, x + 1);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x];
    fill (tab, size, target, begin.y, begin.x);
}

#include <stdlib.h>
#include <stdio.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}