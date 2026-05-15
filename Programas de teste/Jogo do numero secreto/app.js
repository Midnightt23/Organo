alert ('Bem vindo ao jogo do numero secreto');
let numeroSecreto = 23;
let chute = prompt('Escolha um numero entre 1 e 30');

if (numeroSecreto == chute) {
    alert (`Você descobriu o numero secreto ${numeroSecreto}`);
} else {
    if (numeroSecreto > chute) {
        alert (`O numero secreto é maior ${chute}`);
    } else {
        alert (`O numero secreto é menor ${chute}`);
    }
}  
