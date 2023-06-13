#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - This is a  nested loop to make grid
 * @width:  this will be the width input
 * @height: this will be the height input
 * Return:  here a pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **meme;
	int xx, yy;

	if (width <= 0 || height <= 0)
		return (NULL);

	meme = malloc(sizeof(int *) * height);

	if (meme == NULL)
		return (NULL);

	for (xx = 0; xx < height; xx++)
	{
		meme[xx] = malloc(sizeof(int) * width);

		if (meme[xx] == NULL)
		{
			for (; xx >= 0; xx--)
				free(meme[xx]);

			free(meme);
			return (NULL);
		}
	}

	for (xx = 0; xx < height; xx++)
	{
		for (yy = 0; yy < width; yy++)
			mee[xx][yy] = 0;
	}

	return (meme);
}



