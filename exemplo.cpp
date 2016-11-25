#include <iostream>
#include <string>
#include "Veiculo.h"

int main(int argc, char *argv[]) {
  // O primeiro argumento é o tipo, o segundo é a cor
  Veiculo::Builder mecanico;

  Veiculo moto = mecanico.setRodas(2).setCavalos(15).setCor("Azul").build();
  moto.imprimeDados();

  Veiculo carro = mecanico.setCarroBranco().build();
  carro.imprimeDados();

  Veiculo carreta = Veiculo(12, 800, "Prata");
  carreta.imprimeDados();

  return 0;
}
