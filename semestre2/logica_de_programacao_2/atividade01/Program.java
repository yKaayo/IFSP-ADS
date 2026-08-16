//  * 3 atributos;
//  * 2 construtores;
//  * operações `get`;
//  * pelo menos 1 atributo modificável;
//  * operação `equals`;
//  * 1 operação específica.

package br.ifsp.edu.br.exercicio;

import java.util.Objects;

public class Program {
  private String nome;
  private String sobrenome;
  private int idade;

  public Pessoa(String nome, String sobrenome, int idade) {
    this.nome = nome;
    this.sobrenome = sobrenome;
    this.idade = idade;
  }

  public Pessoa(String nome, String sobrenome) {
    this.nome = nome;
    this.sobrenome = sobrenome;
    this.idade = 0;
  }

  public String getNome() {
    return this.nome;
  }

  public String getSobrenome() {
    return this.sobrenome;
  }

  public int getIdade() {
    return this.idade;
  }

  public String nomeCompleto() {
    return this.nome + " " + this.sobrenome;
  }

  @Override
  public boolean equals(Object obj) {
    if (this == obj) {
      return true;
    }
    if (obj == null || getClass() != obj.getClass()) {
      return false;
    }
    Pessoa pessoa = (Pessoa) obj;
    return Double.compare(pessoa.preco, preco) == 0
        && quantidade == pessoa.quantidade
        && Objects.equals(nome, pessoa.nome);
  }

  public void aniversario() {
    this.idade += 1;

    System.out.println("Parabéns! Agora você tem " + this.idade + " anos.");
  }
}