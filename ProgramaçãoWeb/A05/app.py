from flask import Flask, render_template, request, redirect, url_for
import sqlite3
import migration as db

# Inicialização da aplicação Flask
app = Flask(__name__)

# Inicialização do banco de dados SQLite
db.init()

# Rota principal para listar usuários


@app.route('/')
def listar_usuarios():
    # Chama a função do módulo de migração para listar usuários
    usuarios = db.listar_usuarios()
    # Renderiza o template 'lista.html' com a lista de usuários
    return render_template('lista.html', usuarios=usuarios)

# Rota para adicionar usuários (GET para exibir o formulário, POST para processar o formulário)


@app.route('/adicionar', methods=['GET', 'POST'])
def adicionar_usuarios():
    if request.method == 'POST':
        # Obtém dados do formulário
        nome = request.form['nome']
        email = request.form['email']
        senha = request.form['senha']

        # Chama a função do módulo de migração para inserir um novo usuário
        db.inserir_usuario(nome, email, senha)

        # Redireciona para a rota que lista os usuários
        return redirect(url_for('listar_usuarios'))

    # Renderiza o template 'formulario.html' para adicionar usuários
    return render_template('formulario.html', acao='Adicionar')

# Rota para editar usuários (GET para exibir o formulário, POST para processar o formulário)


@app.route('/editar/<int:id>', methods=['GET', 'POST'])
def editar_usuarios(id):
    # Obtém informações do usuário com base no ID fornecido
    usuario = db.buscar_usuario_por_id(id)

    if request.method == 'POST':
        # Obtém dados do formulário
        nome = request.form['nome']
        email = request.form['email']
        senha = request.form['senha']

        # Chama a função do módulo de migração para atualizar informações do usuário
        db.atualizar_usuario(id, nome, email, senha)

        # Redireciona para a rota que lista os usuários
        return redirect(url_for('listar_usuarios'))

    # Renderiza o template 'formulario.html' para editar usuários
    return render_template('formulario.html', acao='Editar', usuario=usuario)

# Rota para deletar usuários


@app.route('/deletar/<int:id>')
def deletar_usuario(id):
    # Chama a função do módulo de migração para deletar um usuário
    db.deletar_usuario(id)

    # Redireciona para a rota que lista os usuários
    return redirect(url_for('listar_usuarios'))


# Executa a aplicação Flask quando o script é executado diretamente
if __name__ == '__main__':
    app.run(debug=True)