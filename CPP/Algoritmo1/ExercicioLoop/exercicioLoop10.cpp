#include <iostream>
using namespace std;
int main() {
  int numInscricao, idade, fem = 0, men = 0, menFortyFive = 0, idadeTotal = 0, contIdade = 0, femWithExpLessThanThirdyFive = 0, idadeMenorFem = 0;
  char sex, exp;
  float idadeMedia, percentMenPlusFortyFive;
  do{
    cout << "Informe o numero de inscricao\n";
    cin >> numInscricao;
    cout << "Informe a idade\n";
    cin >> idade;
    cout << "Informe o sexo: (M|F)\n";
    cin >> sex;
    cout << "Possui experiencia (S|N)";
    cin >> exp;
    if (sex == 'F'){
      fem++;
      if (exp == 'S'){
        femWithExpLessThanThirdyFive++;
        if (idade<idadeMenorFem){
          idadeMenorFem = idade;
        }
      }
    }
    if (sex == 'M'){
      men++;
      if (exp == 'S'){
        idadeTotal += idade;
        contIdade++;
      }
      if (idade>=45){
        menFortyFive++;
      }
    }
  } while (numInscricao>0);
  idadeMedia = idadeTotal / contIdade;
  percentMenPlusFortyFive = (menFortyFive / 100)*men;
  cout << "\nQuantidade de candidatos femininos: " << fem << "\nIdade media dos homens com experiencia anterior: " << idadeMedia << "\nPorcentagem de homens com mais de 45 anos: " << percentMenPlusFortyFive << "%\nQuantidade de mulheres com idade inferior a 35 e com experiencia anterior: "<< femWithExpLessThanThirdyFive << "\nMulher mais nova e com experiencia anterior: "<< idadeMenorFem;
}