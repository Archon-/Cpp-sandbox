#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE * fptr;                    // file holder
    char c;                         // char buffer
    char input[256];
    char buffer[256];
    char str;
    int i;

    i = 0;
    //scanf("%s", input);
    //system("dir >> temp.txt");      // call dir and put it's contents in a temp using redirects.
    //system("dig google.pl");
    snprintf(buffer, sizeof(buffer), "dig %s", argv[1]);
    system(buffer);
    fptr = fopen("temp.txt", "r");  // open said file for reading.
                                    // oh, and check for fptr being NULL.
    while(1){
        c = fgetc(fptr);
        if(c!= EOF){
            printf("%c", c);        // do what you need to.
	    //c = strtok(NULL, ";; AUTHORITY SECTION:");   
	    //str[i] = c;
	    //i++;     
	}else{
            break;                  // exit when you hit the end of the file.
	}
    }
    fclose(fptr);                   // don't call this is fptr is NULL.  
    remove("temp.txt");             // clean up

    //printf("STRING: %c", str);

    getchar();                      // stop so I can see if it worked.
}
