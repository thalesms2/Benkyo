# CPP

## Base
```cpp
int main() {
    return 0;
}
```

## Variáveis
```cpp
int num = 0, x = 20, y = 40;
```

## Iostream
> `#include <iostream>`

Biblioteca para E/S baseada em fluxo

### Namespace
Com namespace:
```cpp
using namespace std;
cout << "echo\n";
```
Sem namespace:
```cpp
std::cout << "echo\n";
```

### COUT
Call out | Console output, operação para inserir algo na tela
Utiliza o operador de inserção `<<`
```cpp
cout << "Hello World!";
std::cout << "Hello World!";
```

Quando necessário exibir uma variável em conjunto a um texto é feito
```cpp
char text[5] = "World";
cout << "Hello" << text << "!";
std::cout << "Hello" << text << "!";
```


### CIN
Call in | Console input, operação para extrair dados inseridos pelo teclado
Utiliza o operador de extração `>>`
```cpp
char name[12];
cin >> name;
std::cin >> name;
```

### ENDL
Mesma função que o `\n`
```cpp
std::cout << "Hello World!" << std::endl;
```



## Estrutura de Controle

### While
```cpp
while(condition) {
    // Código que será executado
}
```

### If
```cpp
if(condition) {
    // Executa aqui SE condition for verdadeira 
} else if(condition) {
    // Executa aqui SE a primeira condição não tiver sido verdadeira e essa retornar verdadeira
} else {
    // Executa aqui SE as duas primeiras condições forem falsas
}
```

### Break

`break` serve para parar a execução de um bloco de código no momento que executado.
```cpp
int counter = 0;
while(true) {
    if(counter > 100) {
        break;
    }
    std::cout << counter << "\n";
    counter++;
}
```
> Vai exibir um número por linha de 0 à 100 até chegar no 101, quando o IF capturar a execução ele quebra o loop usando `break`

### Switch
```cpp
switch(condition) {
    case 'option1':
        // Se a condição for option1 executa isso.
    break;
    case 'option2':
        // Se a condição for option2 executa isso.
    break;
    default:
        // Se não passar em nenhum break acima executa isso.
    break;
}
```

### ForEach

```cpp
int arr[] = { 10, 20, 30, 40 };
for (int x : arr)
    std::cout << x << std::endl;
```