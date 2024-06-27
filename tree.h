#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>
#include <dirent.h>
#include <grp.h>
#include <pwd.h>
#include <time.h>
//static int dircount = 0, filecount = 0; 
void listdir(const char *name, int indent);
void lidir(const char *name, int indent);
void prin();

