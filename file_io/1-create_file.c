#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: Text to write in the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, write_f;

    if (!filename)
        return (-1);

    fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    if (!text_content)
    {
        close(fd);
        return (1);
    }

    write_f = write(fd, text_content, strlen(text_content));
    close(fd);

    if (write_f == -1)
        return (-1);

    return (1);
}
