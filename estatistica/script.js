// Função para abrir o alerta customizado
function mostrarAlerta(mensagem) {
    const modal = document.getElementById('customAlert');
    const mensagemAlerta = document.getElementById('alertMessage');
    mensagemAlerta.innerHTML = mensagem;
    modal.style.display = "block";
}

// Função para fechar o alerta
function fecharAlerta() {
    document.getElementById('customAlert').style.display = "none";
}

// Função principal de cálculo
function calcularIntervaloConfianca() {
    // Pegar os valores dos inputs
    const n = parseInt(document.getElementById('tamanhoAmostra').value);
    const mediaAmostra = parseFloat(document.getElementById('mediaAmostra').value);
    const desvioPadraoAmostra = parseFloat(document.getElementById('desvioPadrao').value);
    const nivelConfianca = parseFloat(document.getElementById('nivelConfianca').value);
    let valorCritico;

    // Verificar se todos os campos foram preenchidos corretamente
    if (!n || !mediaAmostra || !desvioPadraoAmostra || !nivelConfianca) {
        mostrarAlerta("Por favor, preencha todos os campos corretamente.");
        return;
    }

     // Validar o nível de confiança
    if (nivelConfianca === 90) {
        valorCritico = 1.645;
    } else if (nivelConfianca === 95) {
        valorCritico = 1.96;
    } else if (nivelConfianca === 99) {
        valorCritico = 2.575;
    } else {
        mostrarAlerta("Nível de confiança deve ser 90, 95 ou 99");
        return;
    }

    // Calcular o intervalo de confiança
    let intervalo = valorCritico * (desvioPadraoAmostra / Math.sqrt(n));
    let resultadoMais = mediaAmostra + intervalo;
    let resultadoMenos = mediaAmostra - intervalo;

    // Formatar o resultado
    const resultadoFormatado = `IC = [${resultadoMenos.toFixed(2)}; ${resultadoMais.toFixed(2)}]`;

    // Exibir o resultado no HTML
    document.getElementById('resultado').innerHTML = resultadoFormatado;
}
