#include "tree.h"
static int dircount = 0;
void lidir(const char *name, int indent)
{
    DIR *dir;
    struct dirent *entry;

    if (!(dir = opendir(name)))
        return;
    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_DIR) {
            char path[1024];
            if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
    			continue;
            snprintf(path, sizeof(path), "%s/%s", name, entry->d_name);
            printf("\033[1;34m %*s[%s]\n", indent, "", entry->d_name);
            printf("\033[0m");
            //Blue colour to print a directory.
            dircount++;
            lidir(path, indent + 2);
	} 
}

    closedir(dir);
	printf("%d directories\n", dircount);

}
