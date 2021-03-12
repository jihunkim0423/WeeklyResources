#include <stdio.h>

enum Week {MON, TUE, WED, THU, FRI};

struct Course{
    int id;
    char name[20];
    int credits;
    enum Week day;
    int slots[6];

    struct Course *next;
};

void printInfo(struct Course *c){

    do {
        printf("ID: %d\n", c->id);
        printf("Name: %s\n", c->name);
        printf("Credits: %d\n", c->credits);
        switch(c->day){
            case MON: 
                printf("Day: Monday\n");
                break;
            case TUE: 
                printf("Day: Tuesday\n");
                break;
            case WED: 
                printf("Day: Wednesday\n");
                break;
            case THU: 
                printf("Day: Thursday\n");
                break;
            case FRI: 
                printf("Day: Friday\n");
                break;
        }
        
        printf("Slots: ");
        for(int i = 0; i < 6; i++){
            printf("%d, ", c->slots[i]);
        }
        printf("\n\n* * * * * * * * * * * *\n");
        
        c = c->next;

    } while (c != NULL);
}

int main(){

    struct Course course1 = {1111, "Programming", 3, MON, {1, 2, 3, 4, 5, 6}, NULL};

    struct Course course2 = {2222, "Algortithms", 3, WED, {1, 2, 3, 4, 5, 6}, NULL};

    struct Course course3 = {3333, "Math", 3, THU, {3, 4, 5, 6, 7, 8}, NULL};

    course1.next = &course2;
    course2.next = &course3;


    printInfo(&course1);    

    return 0;
}





























/* Task 3

#include <stdio.h>

struct Planet {
    char name[15];
    unsigned int distance;
    int moons;
};

void printInfo (struct Planet p){

    printf("Name: %s\n", p.name);
    printf("Distance: %u\n", p.distance);
    printf("Moons: %d\n\n", p.moons);
}

int main(){

    struct Planet Earth = {"Earth", 93000000, 1};
    struct Planet Venus = {"Venus", 67000000, 0};

    printInfo(Earth);
    printInfo(Venus);

    return 0;
}


*/






/* Task 2

#include <stdio.h>

void printArray(int *arr, int row, int column){
    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%10d", *((arr + i * column) + j));
        }
        puts("");
    }
}

int main(){
    int one[3][6] = {{1,  2,  3,  4,  5,  6}, {7,  8,  9,  10, 11, 12}, {13, 14, 15, 16, 17, 18}};
            

    printArray( (int *) one, 3, 6);

    return 0;
}

*/













/* Task 1

#include <stdio.h>

void printArray(int *arr, int size){
    for(int i = 0; i < size; i ++){
        printf("Address: %u , Value: %d\n", arr + i, arr[i]);

    }
}

int main(){
    int one[][] = {0, 1, 2, 3, 4};

    printArray(one, 5);

    return 0;
}


*/