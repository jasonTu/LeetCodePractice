# include <stdio.h>
# include <string.h>

struct {
    unsigned int width_validated;
    unsigned int height_validated;
} status1;

struct {
    unsigned int width_validated : 1;
    unsigned int height_validated : 1;
} status2;

struct {
    unsigned int width_validated : 1;
    unsigned int height_validated : 1;
    unsigned int height_validated3 : 1;
    unsigned int height_validated4 : 1;
    unsigned int height_validated5 : 1;
    unsigned int height_validated6 : 1;
    unsigned int height_validated7 : 1;
    unsigned int height_validated8 : 1;
    unsigned int height_validated9 : 1;
    unsigned int height_validated10 : 1;
    unsigned int height_validated11 : 1;
    unsigned int height_validated12 : 1;
    unsigned int height_validated13 : 1;
    unsigned int height_validated14 : 1;
    unsigned int height_validated15 : 1;
    unsigned int height_validated16 : 1;
    unsigned int height_validated17 : 1;
    unsigned int height_validated18 : 1;
    unsigned int height_validated19 : 1;
    unsigned int height_validated20 : 1;
    unsigned int height_validated21 : 1;
    unsigned int height_validated22 : 1;
    unsigned int height_validated23 : 1;
    unsigned int height_validated24 : 1;
    unsigned int height_validated25 : 1;
    unsigned int height_validated26 : 1;
    unsigned int height_validated27 : 1;
    unsigned int height_validated28 : 1;
    unsigned int height_validated29 : 1;
    unsigned int height_validated30 : 1;
    unsigned int height_validated31 : 1;
    unsigned int height_validated32 : 1;
    unsigned int height_validated33 : 1;
} status3;

struct {
    unsigned int width_validated : 1;
    unsigned int height_validated : 1;
    unsigned int height_validated3 : 1;
    unsigned int height_validated4 : 1;
    unsigned int height_validated5 : 1;
    unsigned int height_validated6 : 1;
    unsigned int height_validated7 : 1;
    unsigned int height_validated8 : 1;
    unsigned int height_validated9 : 1;
    unsigned int height_validated10 : 1;
    unsigned int height_validated11 : 1;
    unsigned int height_validated12 : 1;
    unsigned int height_validated13 : 1;
    unsigned int height_validated14 : 1;
    unsigned int height_validated15 : 1;
    unsigned int height_validated16 : 1;
    unsigned int height_validated17 : 1;
    unsigned int height_validated18 : 1;
    unsigned int height_validated19 : 1;
    unsigned int height_validated20 : 1;
    unsigned int height_validated21 : 1;
    unsigned int height_validated22 : 1;
    unsigned int height_validated23 : 1;
    unsigned int height_validated24 : 1;
    unsigned int height_validated25 : 1;
    unsigned int height_validated26 : 1;
    unsigned int height_validated27 : 1;
    unsigned int height_validated28 : 1;
    unsigned int height_validated29 : 1;
    unsigned int height_validated30 : 1;
    unsigned int height_validated31 : 1;
    unsigned int height_validated32 : 1;
} status4;

struct {
    unsigned int age : 3;
} Age;

int main()
{
    printf("Memory size of status1 is: %lu\n", sizeof(status1));
    printf("Memory size of status2 is: %lu\n", sizeof(status2));
    printf("Memory size of status3 is: %lu\n", sizeof(status3));
    printf("Memory size of status3 is: %lu\n", sizeof(status4));
    Age.age = 7;
    printf("Age.age is %d\n", Age.age);
    Age.age = 8;
    printf("Age.age is %d\n", Age.age);

}