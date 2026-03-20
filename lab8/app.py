from flask import Flask, request
from lab7 import fun1, fun2

app = Flask(__name__)

@app.get('/')
def main() -> str:
    return('Your choice: <br><a href="/pr1">task1 (array)</a><br>'
           '<a href="/pr2">task2 (string)</a>')

@app.get('/pr1')
def task1() -> str:
    return ('<form method="POST" action="/pr1">Enter your array'
            '<input type="text" name="array"></form>')

@app.post('/pr1')
def pr1() -> str:
    return (f'Your array: {request.form["array"]}<br>'
        f'New array: {fun1([int(x)for x in request.form["array"].split()])}' '<br> <a href="/">Back</a>')

@app.get('/pr2')
def nm2() -> str:
    return ('<form method="POST" action="/pr2">Enter string and letter<br>'
            '<input type="text" name="str">'
            '<input type="text" name="let">'
            '<input type="submit"></form>')

@app.post('/pr2')
def pr2() -> str:
    return (f'Your string: {request.form["str"]}<br>'
        f'New string: {(" ".join(fun2(request.form["str"].split(), request.form["let"]))) }' '<br> <a href="/">Back</a>')

app.run()