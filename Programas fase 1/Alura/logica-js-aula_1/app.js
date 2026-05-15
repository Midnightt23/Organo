alert('Boas vindas ao jogo do número secreto');
let numeroMax = 5000
let numeroSecreto = parseInt (Math.random () * numeroMax + 1);
console.log(numeroSecreto);
let chute;
let tentativas = 1;

while (chute != numeroSecreto) {
    chute = prompt (`Escolha um numero de 1 a ${numeroMax}`);
    if (chute == numeroSecreto) {
     break;
    } else {
        if ( chute > numeroSecreto) {
            alert (`O numero secreto é menor que ${chute}`);
        } else {
            alert (`O numero secreto é maior que ${chute}`);
        }
        tentativas++;
    }
    }
    let palavraTentativa = tentativas > 1 ? "tentativas" : "tentativa";
    alert(`Isso ai! Você descobriu o número secreto ${numeroSecreto} com ${tentativas} tentativas`);
  
  //  if (tentativas > 1) {
  //   alert(`Isso ai! Você descobriu o número secreto ${numeroSecreto} com ${tentativas} tentativas`);
// } else {
 //   alert(`Isso ai! Você descobriu o número secreto ${numeroSecreto} com ${tentativas} tentativa`);
// }

