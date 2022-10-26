#include <stdio.h>
#include <string.h>

typedef struct pessoa Pessoa;
struct pessoa{
    char name[25];
    int age;
    float weight;
};
//Using just the struct i do need to call "struct pessoa" everytime
//Utilizing the typedef with struct there will be no need to call struct everytime

void print_struct(const Pessoa* p);
Pessoa* set_pessoa();

int main(){
    Pessoa* test;    
    test = set_pessoa();
    print_struct(test);
    return 0;
}

void print_struct(const Pessoa* p){
    printf("\nName: %s \nAge: %d \nWeight: %.2f\n",p -> name,p ->age,p-> weight);
}

Pessoa* set_pessoa(){
    Pessoa* pe;
    pe = (Pessoa*) malloc(sizeof(Pessoa));
    printf("Input your name: ");
    scanf("%s",pe-> name);
    printf("\nInput your age: ");
    scanf("%d",&pe->age);
    printf("\nInput your weight: ");
    scanf("%f",&pe->weight);
}
//The (*p).age and p -> weight are equivalent
