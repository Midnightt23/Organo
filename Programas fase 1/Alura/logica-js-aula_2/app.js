alert('Boas vindas ao jogo do número secreto');
let numeroSecreto = 9;
console.log(numeroSecreto)
let chute;
let tentativas = 1;

While (chute != numeroSecreto) {
    chute = prompt ("Escolha um numero de 1 a 10");
    if (chute == numeroSecreto) {
        alert(`Isso ai! Você descobriu o número secreto ${numeroSecreto}`);
    } else {
        if ( chute > numeroSecreto) {
            alert (`O numero secreto é menor que ${numeroSecreto}`);
        } else {
            alert (`O numero secreto é maior que ${numeroSecreto}`);
        }
        tentativas++;
    }
    }

