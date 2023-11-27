#include "main.h"
/**
* create_file - function that creates a file
* @filename: parameter
* @text_content: parameter
* Return: result
*/
int create_file(const char *filename, char *text_content)
{
	int fop, fwr, i;

	if (filename == NULL)
		return (-1);
	fop = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fop < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fop);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	fwr = write(fop, text_content, i);
	if (fwr < 0)
		return (-1);
	close(fop);
	return (1);
}
