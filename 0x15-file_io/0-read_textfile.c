#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX
* @filename: parameter
* @letters: parameter
* Return: result
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fop, frd, fwr;

	char *BUF;

	if (!filename)
		return (0);
	fop = open(filename, O_RDONLY);
	if (fop < 0)
		return (0);
	BUF = (char *) malloc(letters * sizeof(char));
	if (!BUF)
		return (0);
	frd = read(fop, BUF, letters);
	if (frd < 0)
	{
		free(BUF);
		return (0);
	}
	BUF[frd] = '\0';
	fwr = write(STDOUT_FILENO, BUF, frd);
	if (fwr < 0)
	{
		free(BUF);
		return (0);
	}
	free(BUF);
	close(fop);
	return (fwr);
}
