LIBRARY=$1

cd $LIBRARY
go build -a && go run main.go
go build -buildmode=c-shared main.go
