const categoria = document.getElementById("categoria");
const subcategoria = document.getElementById("subcategoria");
const comprador = document.getElementById("comprador");

const opcoesSubcategorias = {
    congelados: ["Carne", "Lanche Pronto", "Vegetal congelado"],
    pereciveis: ["Carne Resfriada", "Friambre", "Iogurte", "Manipulados PAS"],
    hortifruti: ["Fruta", "Tuberculo", "Verdura", "Manipulados FLV"],
    bazar: ["Material escolar", "Cama, mesa e banho", "brinquedo", "Louças"],
    mercearia: ["Cereais", "Massas e molhos", "Biscoitos", "Matinais", "Guloseimas", "Saudaveis", "Perfumaria", "Limpeza", 
    "Bebidas", "Pet"]
};

const compradores = {
    congelados: "Elisson Massoco",
    pereciveis: "Diogo Taboada",
    hortifruti: "Carine Slongo",
    bazar: "Jeferson Oliveira",
    mercearia: "Jean Michell"
};

function carregarSubcategorias(categoriaSelecionada) {
    subcategoria.innerHTML = "";

    if (!categoriaSelecionada) {
        subcategoria.innerHTML = "<option>Selecione uma categoria primeiro</option>";
        comprador.value = "";
    } else {
        comprador.value = compradores[categoriaSelecionada];
        opcoesSubcategorias[categoriaSelecionada].forEach(subcategoriaNome => {
        const option = new Option(subcategoriaNome, subcategoriaNome);
        subcategoria.add(option);
    });
}
}

categoria.addEventListener("change", function () {
    carregarSubcategorias(this.value);
});