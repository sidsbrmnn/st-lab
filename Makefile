all: out

out: triangle commission next_date binary_search quicksort grade

triangle: triangle.c
	clang -o triangle.out triangle.c

commission: commission.c
	clang -o commission.out commission.c

next_date: next_date.c
	clang -o next_date.out next_date.c

binary_search: binary_search.c
	clang -o binary_search.out binary_search.c

quicksort: quicksort.c
	clang -o quicksort.out quicksort.c

grade: grade.c
	clang -o grade.out grade.c
