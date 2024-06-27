#include "tree.h"
int main(int argc, char *argv[]) {
	int i = 1, j = 1, a = 0, d = 0, p = 0, k, t = 0,w, g = 0;
	while(i < argc) {
		if(strcmp(argv[i], "-tree") == 0) {
			t++;
		}
		if(argv[i][0] == '-') {
			j = 1;
			while(argv[i][j] != '\0') {
				if(argv[i][j] == 'a')
					a++;
				if(argv[i][j] == 'd')
					d++;
				if(argv[i][j] == 'p')
					p++;
				j++;
			}
		}
		else {
			printf("tree: Invalid argument\n");
			printf("usage: tree [-a] [-tree] [-d]\n");
		}

		i++;
	}
	if(d != 0) {
		 lidir(".", 0);
		 //printf("%d directories\n", dircount);
	}
	if(t != 0) {
		listdir(".", 0);
    		//printf("%d directories, %d files\n", dircount, filecount);
	}
	if(a != 0) {
		listdir(".", 0);
	    	//printf("%d directories, %d files\n", dircount, filecount);	
	}
		return 0;
}
