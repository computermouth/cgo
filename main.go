
package main

import (
	"fmt"
	"github.com/computermouth/cgo/thinger"
)

func main(){
	
	rc, err := thinger.ExThinger()
	if err != nil {
		panic(err)
	}
	
	fmt.Printf("also done: %d\n", rc)
	
}
