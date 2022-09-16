#include <stdio.h>
#include <string.h>

typedef struct{
    char name[25];
    int age;
    float weight;
}pessoa;
//Using just the struct i do need to call "struct pessoa" everytime
//Utilizing the typedef with struct there will be no need to call struct everytime

void print_struct(pessoa p);

int main(){
    pessoa test;
    char nome[25];int ida; float pes;
    printf("Input your name: ");
    scanf("%s",nome);
    strcpy(test.name,nome);
    printf("\nInput your age: ");
    scanf("%d",&ida);
    test.age = ida;
    printf("\nInput your weight: ");
    scanf("%f",&pes);
    test.weight = pes;
    print_struct(test);
    return 0;
}

void print_struct(pessoa p){
    printf("\nName: %s \nAge: %d \nWeight: %.2f\n",p.name,p.age,p.weight);
}