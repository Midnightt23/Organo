function verificar () {
   let idade = Number(document.getElementById("idade").value);
   let resultado=
   document.getElementById("resultado")
   let mensagem;
   let mensagemd;
if(idade >=18){
    resultado.innerText = "Voce já é maior de idade"
}else {
    resultado.innerText= "Voce é menor de idade"
}}
function limparResultado() {
    document.getElementById("resultado").innerText ="Verifique sua idade";
}
