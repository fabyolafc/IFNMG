from flask import Flask, render_template

app = Flask(__name__)

# Rota para a página principal
@app.route('/')
def index():
    return render_template('index.html')

if __name__ == '__main__':
    app.run(debug=True)
