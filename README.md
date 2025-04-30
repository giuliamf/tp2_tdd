# TP2 - Conversor de Algarismos Romanos (TDD)

Este projeto foi desenvolvido para a disciplina **Técnicas de Programação 2** da Universidade de Brasília (UnB), com foco em **Desenvolvimento Orientado a Testes (TDD)**. O objetivo é implementar uma biblioteca em C++ capaz de converter números romanos válidos para inteiros arábicos, seguindo as boas práticas de engenharia de software.

## ✨ Funcionalidades

- Conversão de algarismos romanos válidos (até 3000) para inteiros
- Retorno de `-1` para strings inválidas (ex: "XXXX", "VV", "IL")
- Validação com expressões regulares
- Testes automatizados com **Google Test**
- Cobertura mínima de 80% garantida com **gcov**
- Análises com **cppcheck** e **valgrind**

## 🧪 Testes

Os testes cobrem:
- Casos válidos (ex: "X", "IV", "MMXXV")
- Casos inválidos (repetições e ordens incorretas)
- Casos limite (vazio, inválidos mistos)

### Executar testes:

```bash
make test
```

## 📈 Verificação de Cobertura

Gera a cobertura de testes com:

```bash
make coverage
```

Resultado: **100% de cobertura em `romano.cpp`**

## 🔍 Ferramentas de Análise

- **Valgrind**: verifica vazamentos de memória
- **Cppcheck**: análise estática do código

```bash
make valgrind
cppcheck --enable=warning .
```

## 🚀 Compilação

O projeto usa um `Makefile` com as seguintes regras:

- `make test` – compila e executa os testes
- `make coverage` – executa cobertura com gcov
- `make valgrind` – executa o valgrind nos testes
- `make clean` – limpa os arquivos temporários

## 🗂️ Estrutura do Projeto

```
tp2_tdd/
├── romano.cpp
├── romano.hpp
├── testa_romano.cpp
├── tests/
│   └── test_romano.cpp
├── Makefile
├── .git/
├── README.txt
└── leiame.txt
```

## 👩‍💻 Autora

- Giulia Moura Ferreira
- Ciência da Computação – Universidade de Brasília (UnB), semestre 2025.1
