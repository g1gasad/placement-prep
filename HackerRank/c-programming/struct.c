#include <stdio.h>
typedef struct triangle{
    int a; int b; int c;
} triangle;

void swap(triangle *tri){
    triangle temp;
    temp = *tri;
    *tri = *(tri+1);
    *(tri+1) = temp;
}
int main(){
    triangle tris[2] = {{3, 3, 3}, {5, 5, 5}};
    printf("%d %d %d\n", tris[0].a, tris[0].b, tris[0].c);
    swap(tris);
    printf("%d %d %d\n", tris[0].a, tris[0].b, tris[0].c);
    printf("%d %d %d\n", tris[1].a, tris[1].b, tris[1].c);

    return 0;

}