package main

import (
	"fyne.io/fyne/v2/app"
	"fyne.io/fyne/v2/widget"
)

func main() {
	a := app.New()
	w := a.NewWindow("Olá Fyne")
	w.SetContent(widget.NewLabel("Olá, Fyne!"))
	w.ShowAndRun()
}
