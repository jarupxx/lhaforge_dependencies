#include <stdio.h>
#define LIBARCHIVE_STATIC
#include <libarchive/archive.h>
#include <libarchive/archive_entry.h>
#include <zip.h>

int main()
{
    //libarchive
    printf("Libarchive version details:\n");
    printf("%s\n", archive_version_details());

    struct archive* arc;
    arc = archive_write_new();
    archive_write_close(arc);
    archive_write_free(arc);

    //minizip
    auto zf = unzOpen64("some_non_existing_file");
    if (!zf)printf("minizip returned as expected");
    return 0;
}
