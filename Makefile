all: out

out: triangle commission next_date binary_search quicksort grade

triangle: triangle.c
	gcc -o triangle.out triangle.c

commission: commission.c
	gcc -o commission.out commission.c

next_date: next_date.c
	gcc -o next_date.out next_date.c

binary_search: binary_search.c
	gcc -o binary_search.out binary_search.c

quicksort: quicksort.c
	gcc -o quicksort.out quicksort.c

grade: grade.c
	gcc -o grade.out grade.c
