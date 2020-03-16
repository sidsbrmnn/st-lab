all: out

out: triangle commission next_date

triangle: triangle.c
	gcc -o triangle.out triangle.c

commission: commission.c
	gcc -o commission.out commission.c

next_date: next_date.c
	gcc -o next_date.out next_date.c

clean:
	rm -rf *.out
