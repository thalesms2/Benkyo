# Compilar código

- Para gerar o arquivo binário executavel digite no terminal
```bash
g++ arquivo.cpp -o nomeExecutavel
g++ -o nomeExecutavel.exe arquivo.cpp
```
- Executando o arquivo gerado
```bash
./nomeDoArquivoBinario.exe
```
## Parâmetros

`-o` Compila para um executavel definindo seu nome e linkando todos os arquivos.
`-S` Compila para um `assembly source file`
`-c` Compila para um `object code`
`-Wall`  Mostra todas as mensagens de avisos que foram geradas durante a compilação