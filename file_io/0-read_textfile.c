#include "main.h"
/**
 * read_textfile - Reads a text file
 * and prints it to POSIX stdout.
 * @file_path: File with the text to read.
 * @num_letters: Number of letters to read from the file.
 *
 * Return: The number of letters read or 0 if the file can't be opened or read.
 */
ssize_t read_textfile(const char *file_path, size_t num_letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (!file_path)
	return (0);

	buffer = malloc(sizeof(char) * num_letters);
	if (!buffer)
	return (0);

	file_descriptor = open(file_path, O_RDONLY);
	if (file_descriptor < 0)
	{
	free(buffer);
	return (0);
	}

	bytesRead = read(file_descriptor, buffer, num_letters);
	if (bytesRead < 0)
	{
	free(buffer);
	close(file_descriptor);
	return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);
	close(file_descriptor);

	if (bytesWritten < 0)
	return (0);

	return (bytesWritten);
}
