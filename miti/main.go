package main

import (
	"C"
	"fmt"
	"unsafe"
)

//export MitiFindDType
func MitiFindDType(data *C.char) {
	str := C.GoString(data)
	fmt.Println(str)
}

//export MitiParse
func MitiParse(data *C.char, size *C.int) *C.float {

 	arrLen := 100
	a := make([]C.float, arrLen)

	vertices := C.malloc(C.size_t(len(a)) * C.size_t(unsafe.Sizeof(uintptr(0))))
	item := (*[1000000]C.float)(vertices) // 1000000 max inputs 
										  // (250000) max vertices of Dtype 4
	for i := 0; i < arrLen; i++ {
		item[i] = C.float(i*i)
	}

	presize := C.int(190)
	size = &presize

	return (*C.float)(vertices)
}

func main() {}