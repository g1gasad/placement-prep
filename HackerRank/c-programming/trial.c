#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int arr[n];
    int x, y, z; 
    float p, area;
    for (int i=0; i<n; i++){
        x=tr[i].a; y=tr[i].b; z=tr[i].c;
        p = (double)(x+y+z)/2;
        area = sqrt(p*(p-x)*(p-y)*(p-z));
        arr[i] = p;
    }
    for(int i=0; i<n; i++){
        printf("%.1f\n", arr[i]);
    }
}

int main()
{
	int n=2;
	triangle *tr = malloc(n * sizeof(triangle));
    tr[0].a = 3;
    tr[0].b = 3;
    tr[0].c = 3;
    tr[1].a = 4;
    tr[1].b = 5;
    tr[1].c = 6;
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}