LIBRARY=$1

cd $LIBRARY
go build -a && go run main.go
go build -a -buildmode=c-archive main.go
