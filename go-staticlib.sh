LIBRARY=$1

cd $LIBRARY/src
go build -a && go run main.go
go build -buildmode=c-shared -o ../library/$LIBRARY.a main.go