#include <stdio.h>
#include <stdlib.h>

// this code on github
int main(int argc, char* argv[]){
	char *result;
	if(argc < 2){
		printf("usage: getenv <env name>\nExample: ./getenv PATH\n");
		return -1;
	}
	else{
		result = getenv(argv[1]); 
		if(result){
			printf("%s\n", result);
		}
		else{
			printf("No environment data or incorrect environment name...\n");
		}
		return 0;
	}
}

// compile: g++ getenv.cpp -o getenv
// run:	./getenv

// after git commit try: git push origin master --force
