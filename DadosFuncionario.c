#include <stdio.h>

struct Funcionario {
    char nome[50];
    int idade;
    char sexo[2];
    int cpf;
    int dataNascimento;
    char codigoSetor[5];
    char cargo[30];
    float salario;
};

void dadosFuncionario(struct Funcionario *funcionario){
    printf("Digite o nome:");
    scanf("%s", funcionario->nome);
    printf("Digite a idade:");
    scanf("%d", &funcionario->idade);
    printf("Digite o sexo:(M/F)");
    scanf("%s", funcionario->sexo);
    printf("Digite o CPF:");
    scanf("%d", &funcionario->cpf);
    printf("Digite a data de nascimento:");
    scanf("%d", &funcionario->dataNascimento);
    printf("Digite o codigo do setor:");
    scanf("%s", funcionario->codigoSetor);
    printf("Digite o cargo:");
    scanf("%s", funcionario->cargo);
    printf("Digite o salario:R$");
    scanf("%f", &funcionario->salario);

    printf("---------------------------------\n");
    printf("\n");
};

int main(){
    struct Funcionario funcionario;
    dadosFuncionario(&funcionario);

    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %s\n", funcionario.sexo);
    printf("CPF: %d\n", funcionario.cpf);
    printf("Data de nascimento: %d\n", funcionario.dataNascimento);
    printf("Codigo do setor: %s\n", funcionario.codigoSetor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salario:R$ %.2f\n", funcionario.salario);

    return 0;
};
