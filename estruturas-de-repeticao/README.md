# Estruturas de Repetição

## While
* A estrutura de repetição while executa **repetidamente** um bloco de código _enquanto_ uma condição especificada é **verdadeira**. Assim que a condição se torna falsa, o loop termina e o controle do programa passa para a linha de código imediatamente após o loop. 
* ⚠️ Para evitar o loop infinito é fundamental garantir que a condição do loop será **eventualmente falsa**, o que geralmente envolve a modificação de uma variável usada na condição. 
* Exemplo de estrutura while: 
  
````
int i = 1;

while (i <= 5)
{
    // bloco de código a ser executado repetidamente
    printf("%d ", i);
    i++; // variável de incremento que evita o loop infinito
}
````

## do While

* Estrutura similiar ao While, porém ele executa a repetição **ao menos uma vez**. Isso ocorre porque ele checa a condição do loop somente após a primeira repetição.
* Essa característica torna o do-while mais útil em situações em que a ação deve ser executada antes de a condição ser testada. 
* Exemplo da estrutura do-while:

````
int i = 1;

do
{
    printf("%d ", i);
    i++;
}
while (i <= 5);
````

## For
* A sintaxe do for é **compacta e eficiente**, permitindo que todas as partes essenciais de um loop (**inicialização, condição e incremento**) sejam definidas em uma única linha.
* Essa estrutura é ideal para situações em que o número de iterações é **conhecido antecipadamente**, como ao iterar sobre os elementos de um array ou executar um bloco de código um número fixo de vezes.
* ⚠️ Atenção: a variável definida dentro do parênteses do for só é enxergada dentro do bloco de códigos do for respectivo. Caso seja necessário o acesso da variável fora do bloco de código for, será preciso declará-la fora do parênteses do for.
* Exemplo da estrutura for: 

````
for (int i = 1; i <= 5; i++)
{
    printf("%d ", i);
}
````


