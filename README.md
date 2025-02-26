# ⚠️ Importante!!!
# Comparação de Atributos de Cidades

Este programa permite a comparação entre duas cidades com base em atributos como população, área, PIB, pontos turísticos e densidade demográfica.

## Instruções de Execução

### Como compilar o código:
Para compilar o código, você pode usar o GCC (GNU Compiler Collection), disponível em ferramentas como **MinGW** ou **Cygwin**. Certifique-se de que o `gcc` esteja instalado no seu sistema.

1. Abra o terminal (Prompt de Comando ou PowerShell).
2. Navegue até o diretório onde o arquivo `comparacao_cidades.c` está localizado.
3. Compile o código com o seguinte comando:
   ```bash
   gcc -o comparacao_cidades comparacao_cidades.c
Como executar o programa:
Para executar o programa compilado, use o seguinte comando no terminal: <br>


./comparacao_cidades

## Exemplo de Uso:
O programa solicitará os dados de duas cidades (nome, população, área, PIB, pontos turísticos e densidade demográfica).
Depois, você poderá selecionar dois atributos para comparar entre as cidades. <br>

Menus: <br>

Primeiro atributo para comparar:

1 - População <br>
2 - Área <br>
3 - PIB <br>
4 - Pontos turísticos <br>
5 - Densidade demográfica <br>
Segundo atributo para comparar:

1 - População <br>
2 - Área <br>
3 - PIB <br>
4 - Pontos turísticos <br>
5 - Densidade demográfica <br>

## Regras de Comparação:
O maior valor do atributo vence, exceto para Densidade Demográfica, onde o menor valor vence.
Após comparar os dois atributos, o programa soma os valores e declara o vencedor final.


## Exemplo de Execução

Digite o nome da cidade 1: Cidade A <br>
Digite a população da cidade 1: 5000000 <br>
Digite a área da cidade 1 (em km²): 10000 <br>
Digite o PIB da cidade 1 (em bilhões): 200 <br>
Digite o número de pontos turísticos da cidade 1: 50 <br>

Digite o nome da cidade 2: Cidade B <br>
Digite a população da cidade 2: 3000000 <br>
Digite a área da cidade 2 (em km²): 12000 <br>
Digite o PIB da cidade 2 (em bilhões): 150 <br>
Digite o número de pontos turísticos da cidade 2: 60 <br>

Escolha o primeiro atributo para comparar:
1 - População <br>
2 - Área <br>
3 - PIB <br>
4 - Pontos turísticos <br>
5 - Densidade demográfica <br>
Escolha uma opção: 1 <br>

Escolha o segundo atributo para comparar (não pode ser o mesmo que o primeiro):
1 - População <br>
2 - Área <br>
3 - PIB <br>
4 - Pontos turísticos <br>
5 - Densidade demográfica <br>
Escolha uma opção: 4 <br>

Comparando os atributos escolhidos:<br>
Cidade A vence no primeiro atributo.




