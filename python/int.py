import turtle
pen=turtle.Turtle()
def curve():
    for i in range(200):
        pen.right(1)
        pen.forward(1)
def heart():
    pen.fillcolor('red')
    pen.begin_fill()
    pen.left(140)
    curve()
    pen.left(120)
    curve()
    pen.forward(112)
    pen.end_fill()
def text():
    pen.up()
    pen.setpos(-68,95)
    pen.color("lightgreen")
    pen.write("",font=("jokerman",12))
heart()
text()
