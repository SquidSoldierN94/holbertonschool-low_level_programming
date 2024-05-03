#include "main.h"

/**
 * read_textfile - Reads a text file and prints to POSIX stdout.
 * @filename: File to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, size;
    char *buffer;

    buffer = malloc(sizeof(char) * letters);

    if (!filename)
        return (0);

    if (!buffer)
        return (0);

    fd = open(filename, O_RDONLY);
    size = write(STDOUT_FILENO, buffer, read(fd, buffer, letters));

    if (fd == -1 || size == -1)
    {
        free(buffer);
        return (0);
    }

    close(fd);
    free(buffer);
    return (size);
}
