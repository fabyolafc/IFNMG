from flask import Flask, render_template

import test

app = Flask(__name__)
@app.route("/")
def homepage():
    return "<H1>Hello Web.py</H1>"

@app.route("/start")

def start():
    return "Starting..."

@app.route("/teste")
def lista_usuarios():
    return render_template("teste.html")

app.run(debug=True)