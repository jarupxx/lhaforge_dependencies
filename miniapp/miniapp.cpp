#include <stdio.h>
#define LIBARCHIVE_STATIC
#include <libarchive/archive.h>
#include <libarchive/archive_entry.h>

int main()
{
    printf("Libarchive version details:\n");
    printf("%s\n", archive_version_details());

    struct archive* arc;
    arc = archive_write_new();
    archive_write_close(arc);
    archive_write_free(arc);
    return 0;
}
