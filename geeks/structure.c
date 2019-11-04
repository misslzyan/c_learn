#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct person {
	int id;
	char fname[20];
	char lname[20];
} my_person;

int main(){
	FILE *fp = fopen("person.dat", "wx");
	size_t cn;
	if(fp==NULL){
		fprintf(stderr, "File is exists or can't open file!");
		exit(-1);
	}
	my_person p1 = {1, "duan", "weidong"};
	my_person p2 = {2, "li", "zhiyan"};
	fwrite(&p1, sizeof(my_person), 1, fp);
	cn = fwrite(&p2, sizeof(my_person), 1, fp);
	if(cn){
		printf("contents to file write successfully!\n");
	} else {
		printf("something goes wrong!\n");
	}
	fclose(fp);

	fp = fopen("person.dat", "r");
	if(fp==NULL){
		printf("something goes wrong !");
		exit(-1);
	}
	my_person p3;
	while(fread(&p3, sizeof(my_person), 1, fp)){
		printf("person id : %d, name : %s %s\n", p3.id, p3.fname, p3.lname);
	}
	fclose(fp);
	return 0;
}