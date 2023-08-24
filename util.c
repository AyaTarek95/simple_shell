#include "main.h"
/**
 * free_str_arr - free array of str
 * @arr: arr of str
 * Return: always 0
 */
void free_str_arr(char **arr)
{
	int k;

	if (!arr)
		return;

	for (k = 0; arr[k]; k++)
		free(arr[k]), arr[k] = NULL;

	free(arr), arr = NULL;
}
