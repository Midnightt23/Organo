const estudante = {
    nome: 'Jean Michell',
    idade: 31,
    cpf: '01992610088',
    turma: 'React',
    telefones: ['54999381086', '54996961264'],
    endereco: [{
        rua: 'Antonio Formigueri Langaro',
        numero: '307',
        bairro: 'suzana'
    }]
}

estudante.endereco.push({
    rua: 'Maximiliano de Almeida',
    numero: '2472',
    bairro: 'Vida Nova'
})

// console.log(estudante.endereco);
// console.log(estudante.endereco[1]);

const listaEnderecosComComplemento = estutante.endereco.filter((endereco) => endereco.bairro)

console.log(listaEnderecosComComplemento);