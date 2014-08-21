package main

import "../"

func main() {
	s := "./qt5"
	c := qt5.NewCoreApp(1, &s)

	c.Exec()
}
