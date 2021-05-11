#include<iostream>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv ) {
	const char * fn = "test.file";			// file name
	const static int maxString = 1024;	// read buffer size
	const char * str = "This is a literal C-string.\n";

	// create/write the file
	printf("writing file\n");
	FILE * fw = fopen(fn, "w");
	for(int i = 0; i < 5; i++) {
		fputs(str, fw);
	}
	fclose(fw);
	printf("done.\n");

	// read the file
	printf("reading file\n");
	char buf[maxString];
	FILE * fr = fopen(fn, "r");
	char * rc;
	while(( rc = fgets(buf, maxString, fr) )) {
        // (()) means that I am asigning and I am testing at the same time 
		printf("%s",buf);
	}
	fclose(fr);
	printf("done.\n");

	return 0;
}
/*
int main()
{
    int count = 10;
    char str[10];
    FILE *fp;
    
    fp = fopen("file.txt","w+");
    fputs("An example file\n", fp);
    fputs("Filename is file.txt\n", fp);
    
    rewind(fp);
    
    while(feof(fp) == 0)
    {
        fgets(str,count,fp);
        cout << str << endl;
    }
    
    
    fclose(fp);
    return 0;
}
*/