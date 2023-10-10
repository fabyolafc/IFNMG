from flask import Flask
app = Flask(__name__)

#Decorator

@app.route("/")
def homepage():
    return "Hello Web.py"
@app.route("/start")
def start():
    return "Starting..."
app.run(debug=True)