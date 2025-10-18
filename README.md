# Super Trunfo 🎴

**Projeto de Programação em C** – Nível iniciante/intermediário, desenvolvido como atividade acadêmica.

## 📋 Descrição

O **Super Trunfo** é uma implementação digital do clássico jogo de cartas no qual cada carta representa um país ou cidade com diversos atributos. Os jogadores comparam características das cartas para determinar o vencedor de cada rodada.

Este projeto permite:
- Cadastro de **duas cartas** com informações detalhadas sobre cidades/países
- Registro de atributos como **população, área, PIB e número de pontos turísticos**
- Cálculo automático de atributos derivados: **densidade populacional, PIB per capita** e **Super Poder**
- Comparação interativa de dois atributos escolhidos pelo jogador
- Tratamento de **empates** e exibição clara dos resultados

O foco do projeto é praticar conceitos fundamentais de programação em C, incluindo entrada/saída de dados, manipulação de variáveis, uso de estruturas (`struct`) e formatação de saídas.

## ✨ Funcionalidades

- ✅ Cadastro completo de cartas com validação de dados
- ✅ Menu interativo de seleção de atributos
- ✅ Comparação individual e combinada de atributos
- ✅ Tratamento de erros de entrada do usuário
- ✅ Exibição organizada e intuitiva do vencedor
- ✅ Cálculo automático de métricas derivadas

## 🏗️ Estrutura do Código

### Estrutura de Dados
- **`Carta`**: `struct` que armazena todas as informações de cada carta, incluindo:
  - Dados básicos (código, nome, população, área, PIB)
  - Atributos calculados (densidade populacional, PIB per capita, Super Poder)

### Funções Principais
- **`pegar_valor`**: retorna o valor numérico do atributo selecionado de uma carta
- **`nome_atributo`**: retorna o nome formatado do atributo para exibição
- **`comparar_atributo`**: realiza a comparação individual de atributos entre duas cartas
- **`exibir_menu_segundo`**: apresenta o menu para seleção do segundo atributo na comparação

## 🛠️ Tecnologias

- **Linguagem**: C (padrão C99 ou superior)
- **Compilador**: GCC ou compatível
- **Plataforma**: Console/terminal (multiplataforma)

## 🚀 Como Usar

### Compilação

Compile o programa usando o GCC:

```bash
gcc super_trunfo.c -o super_trunfo
```

### Execução

Execute o programa compilado:

```bash
./super_trunfo
```

No Windows:
```bash
super_trunfo.exe
```

### Fluxo de Uso

1. **Cadastro das Cartas**: Insira os dados solicitados para as duas cartas (código, nome, população, área, PIB e pontos turísticos)
2. **Seleção de Atributos**: Escolha dois atributos para comparação através do menu interativo
3. **Visualização do Resultado**: O programa exibirá qual carta venceu em cada atributo e o resultado final da rodada

### Exemplo de Atributos

- População
- Área territorial
- PIB (Produto Interno Bruto)
- Pontos turísticos
- Densidade populacional (calculada automaticamente)
- PIB per capita (calculado automaticamente)
- Super Poder (calculado automaticamente)

## 📚 Conceitos de Programação Aplicados

- Estruturas de dados (`struct`)
- Entrada e saída formatada (`scanf`, `printf`)
- Funções e modularização
- Estruturas de decisão (`if/else`, `switch`)
- Operadores relacionais e lógicos
- Manipulação de strings
- Validação de entrada de dados

## 👥 Contribuições

Este é um projeto acadêmico voltado para aprendizado. Sugestões e melhorias são bem-vindas!

## 📄 Licença

Projeto desenvolvido para fins educacionais.

---

**Nota**: Este projeto foi desenvolvido como atividade prática para consolidação de conceitos básicos e intermediários de programação em C.
