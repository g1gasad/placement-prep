#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void printArray(float arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%f\n", arr[i]);
    }
    printf("\n");
}
struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	float areas[100];
	float s, area, temp_area;
	int x, y, z;
	triangle *p, *q, temp_tri;
	p = tr;
	for(int k=0; k<n; k++){
		x=p->a; y=p->b; z=p->c;
		s = (x+y+z) / 2.0;
		area = sqrt(s * (s-x) * (s-y) * (s-z));
		// printf("%d %d %d - ", x, y, z);
		// printf("%f\n", area);
		areas[k] = area;
		p++;
	}
	// printArray(areas, n);
	for(int i=0; i<n-1; i++){
		for (int j=0; j<n-i-1; j++){
			p = tr+j;
			q = tr+j+1;
			if(areas[j]>areas[j+1]){
				temp_area = areas[j];
				areas[j] = areas[j+1];
				areas[j+1] = temp_area;
				temp_tri = *p;
                *p = *q;
                *q = temp_tri;
			}
		}
	}
	// printArray(areas, n);

}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}