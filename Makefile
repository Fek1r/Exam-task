run:
	./main.o 

gcc:
	gcc main_scanf.c -o main.o


push:
	git add .
	git commit -a -m "Ya Ser"
	git push origin main 

delete:
	rm -f main.o