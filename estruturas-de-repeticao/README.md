# Estruturas de Repetição

## While
* A estrutura de repetição while executa **repetidamente** um bloco de código _enquanto_ uma condição especificada é **verdadeira**. Assim que a condição se torna falsa, o loop termina e o controle do programa passa para a linha de código imediatamente após o loop. 
* ⚠️ Para evitar o loop infinito é fundamental garantir que a condição do loop será **eventualmente falsa**, o que geralmente envolve a modificação de uma variável usada na condição. 
* Exemplo de estrutura while: 
  
````
while (i <= 5)
{
    // bloco de código a ser executado repetidamente
    printf("%d ", i);
    i++; // variável de incremento que evita o loop infinito
}
````


