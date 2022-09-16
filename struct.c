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
void set_pessoa(pessoa *p, char name[25], int age, float weight );

int main(){
    pessoa test;
    char nome[25];int ida; float pes;
    printf("Input your name: ");
    scanf("%s",nome);
    printf("\nInput your age: ");
    scanf("%d",&ida);
    printf("\nInput your weight: ");
    scanf("%f",&pes);
    set_pessoa(&test, nome, ida, pes);
    print_struct(test);
    return 0;
}

void print_struct(pessoa p){
    printf("\nName: %s \nAge: %d \nWeight: %.2f\n",p.name,p.age,p.weight);
}

void set_pessoa(pessoa *p, char name[25], int age, float weight){
    (*p).age = age;
    p -> weight = weight;
    strcpy( p-> name,name);
}
