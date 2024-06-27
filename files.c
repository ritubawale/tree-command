#include "tree.h"
static int dircount = 0, filecount = 0;
void listdir(const char *name, int indent)
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
            listdir(path, indent + 2);
            
        } else {
        	if(strstr(entry->d_name, ".tar.gz") || strstr(entry->d_name, ".zip")) {
        		printf("\033[1;31m%*s- %s\n", indent, "", entry->d_name);
            	printf("\033[0m");
            	//Red colour to print tar files.
            }
            else if(!(strstr(entry->d_name, ".")) || (strstr(entry->d_name, ".out"))) {
            	printf("\033[1;32m%*s- %s\n", indent, "", entry->d_name);
            	printf("\033[0m");
            	//Green colour to print executable files.
            }
            else 
        		printf("%*s- %s\n", indent, "", entry->d_name);
            	filecount++;
		
        }
    }

    closedir(dir);
printf("%d directories %d files\n", dircount, filecount);
    		    		

}
	

