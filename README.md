# Sistema de Votação em C — Eleição Peor es Nada 2026

## 📌 Visão Geral

O **Sistema de Votação Peor es Nada 2026** é um projeto desenvolvido em linguagem C com o objetivo de simular um processo simples de eleição eletrônica em ambiente de terminal.

O programa permite cadastrar candidatos, registrar votos, contabilizar votos válidos, votos brancos e votos nulos, além de realizar automaticamente a apuração final da eleição.

Este projeto foi criado com foco educacional, visando praticar conceitos fundamentais de programação em C, como:

* Variáveis
* Estruturas condicionais
* Estruturas de repetição
* Manipulação de strings
* Entrada e saída de dados
* Validação de entrada
* Lógica de apuração

---

# 🚀 Funcionalidades

O sistema possui os seguintes recursos:

* Cadastro dinâmico de candidatos
* Registro de votos via terminal
* Contagem automática de votos
* Votos em branco
* Votos nulos
* Identificação do candidato vencedor
* Verificação de empate
* Exibição do total de eleitores
* Tratamento de entradas inválidas
* Interface textual simples e organizada

---

# 🛠 Tecnologias Utilizadas

* Linguagem C
* Biblioteca `stdio.h`
* Biblioteca `string.h`

---

# 📋 Pré-requisitos

Antes de executar o projeto, é necessário possuir:

* Um compilador C instalado
* VS Code, Dev-C++, Code::Blocks ou outro ambiente de desenvolvimento

Exemplos de compiladores:

* GCC
* MinGW

---

# ▶️ Como Executar o Projeto

## 1. Clone o repositório

```bash
git clone https://github.com/seuusuario/sistema-votacao-c.git
```

---

## 2. Acesse a pasta do projeto

```bash
cd sistema-votacao-c
```

---

## 3. Compile o código

```bash
gcc votacao.c -o votacao
```

---

## 4. Execute o programa

### Windows

```bash
votacao.exe
```

### Linux/macOS

```bash
./votacao
```

---

# 🖥 Exemplo de Uso

```text
## Eleicao Peor es Nada 2026 ##

Cadastro dos candidatos

Digite o nome do candidato1: Carlos
Digite o nome do candidato2: Ana
Digite o nome do candidato3: João
Digite o nome do candidato4: Maria

1 - Carlos
2 - Ana
3 - João
4 - Maria
5 - Voto em Branco
0 - Encerrar apuração
```

Após o encerramento da votação, o sistema exibirá:

* candidato vencedor
* total de votos de cada candidato
* votos brancos
* votos nulos
* total de eleitores

---

# 📚 Conceitos Trabalhados

Este projeto explora diversos conceitos importantes da programação em C:

* Estrutura `while`
* Estrutura `switch`
* Condições `if` e `else`
* Vetores de caracteres (`char`)
* Manipulação de strings
* Entrada segura de dados
* Controle de fluxo
* Contadores e variáveis acumuladoras

---

# 📂 Estrutura do Projeto

```text
sistema-votacao-c/
│
├── votacao.c
├── README.md
```

---

# 🤝 Contribuição

Contribuições são bem-vindas.

Caso deseje melhorar o projeto:

1. Faça um fork do repositório
2. Crie uma nova branch
3. Realize suas alterações
4. Envie um pull request

Sugestões de melhorias:

* Interface gráfica
* Salvamento em arquivos
* Cadastro ilimitado de candidatos
* Relatórios mais detalhados
* Sistema de login para administradores

---

# 🐞 Relatar Problemas

Se encontrar bugs ou problemas no sistema, abra uma issue no repositório GitHub informando:

* descrição do problema
* comportamento esperado
* passos para reproduzir o erro

---

# 📄 Licença

Este projeto possui finalidade educacional e pode ser utilizado livremente para estudos e aprendizado.

---

# 👨‍💻 Autor

Desenvolvido por Trislikas como projeto de aprendizado em linguagem C.
