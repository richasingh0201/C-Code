//Write a Student Record
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s1 = {101, "John Doe", 89.5};
    FILE *fp = fopen("student.dat", "wb");  // Open file in write binary mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&s1, sizeof(struct Student), 1, fp);  // Write structure data
    fclose(fp);
    printf("Structure written successfully!\n");
    return 0;
}
