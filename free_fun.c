#include "main.h"

/*free_fun - free PATH
*@PATH - PATH
*
*
*/

void free_fun(char **PATH)
{
	int i = 0;
	
	while(PATH[i] != NULL)
	{	
		free(PATH[i]);
		i++;
	}

	free(PATH);
}
