window.onload = function () {

    f.onsubmit = function () {
        var r = true;
        if (nome.value.length == 0) {
            erronome.innerHTML = "Infome o nome. ";
            r = false;
        } else {
            erronome.innerHTML = " ";

        }

        if (sexo.value == "vazio") {
            errosexo.innerHTML = "Infome o sexo. ";
            r = false;
        } else {
            errosexo.innerHTML = " ";

        }
        return r;
    }

    // Evento de escolha do estado
    uf.onchange = function () {
        switch (uf.selectedIndex) {
            case 1:
                cidadesBA();
            break;
            case 2:
                cidadesMG();
            break;
            case 3:
                cidadesSP();
            break;
            default:
                nenhumaCidade();
        }
    }

}

function cidadesBA () {
    cidade.innerHTML = '<option value="vazio"> </option>' + 
                        '<option> Alcubaça </option>' +
                        '<option> Feira de Santana </option>' +
                        '<option> Porto Seguro </option>' +
                        '<option> Santa Ines </option>' +
                        '<option> Senhor do Bonfim </option>' +
                        '<option> Tremedal </option>' +
                        '<option> Tucano </option>' +
                        '<option> Uaua </option>' +
                        '<option> Ubaira </option>' +
                        '<option> Ubaitaba </option>' +
                        '<option> Ubata </option>';
}

function cidadesMG () {
    cidade.innerHTML = '<option value="vazio"> </option>' + 
                        '<option>Abaeté</option>' + 
                        '<option>Água Boa</option>' +
                        '<option>Araçuaí</option>' + 
                        '<option>Belo Horizonte</option>' + 
                        '<option>Berilo</option>' + 
                        '<option>Guanhães</option>' + 
                        '<option>Francisco Badaró<</option>' + 
                        '<option>Ipatinga</option>' + 
                        '<option>Itinga</option>' + 
                        '<option>Lelivéldia</option>' +
                        '<option>Viçosa</option>' +
					    '<option>Virgem da Lapa</option>'; 
}

function cidadesSP () {
    cidade.innerHTML = '<option value="vazio"> </option>' + 
                        '<option>Adamantina</option>' + 
                        '<option>Alvares Florence</option>' +
                        '<option>Areias</option>' + 
                        '<option>Brotas</option>' + 
                        '<option>Cajuru</option>' + 
                        '<option>Iguapé</option>' + 
                        '<option>Presidente Prudente</option>' + 
                        '<option>Santo André</option>' + 
                        '<option>São Paulo</option>' + 
                        '<option>Votorantim</option>';   
}

function nenhumaCidade (){
    if (uf.selectedIndex === 0){
		cidade.innerHTML = '<option value = "vazio"></option>';
	}
}