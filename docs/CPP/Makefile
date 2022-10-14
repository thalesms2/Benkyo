CXXARGS = -Wall -Wextra -std=c++17
NOMEPROG = arquivo.bin

ARQUIVO = pessoamain.cpp

#alvo: dependencia outroalvo arquivo (3 alvos: compilar, debug, limpar arquivos)
#	#acao
#make compilar
compilar: $(ARQUIVO) #dependencia
	g++ $(ARQUIVO) -o $(NOMEPROG) $(CXXARGS)

#make debug no terminal do linux
debug: $(ARQUIVO)
	g++ $(ARQUIVO) -o $(NOMEPROG) $(CXXARGS) -g

apagar:
	rm $(NOMEPROG)

executar: compilar
	./$(NOMEPROG)


#no meu programa precisa dar make executar pra executar

