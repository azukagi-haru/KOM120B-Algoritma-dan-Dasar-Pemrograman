#include <stdio.h>

// define abs function
double abs_val(double number) {
    if (number >= 0) return number;
    else return -1 * number;
}

// define function to calculate a triangle's area
double triangle_area(double ax, double ay, double bx, double by, double cx, double cy) {
    double area;
    
    area = 0.5 * abs_val((ax*(by - cy) + bx*(cy - ay) + cx*(ay - by)));
    
    return area;
}

// main code here
int main() {
    double coorx1, coory1, coorx2, coory2, coorx3, coory3, area_tri, x, y, area_tmp1, area_tmp2, area_tmp3, sum_area;
    int counter;
    
    scanf("%lf %lf", &coorx1, &coory1);
    scanf("%lf %lf", &coorx2, &coory2);
    scanf("%lf %lf", &coorx3, &coory3);
    
    area_tri = triangle_area(coorx1, coory1, coorx2, coory2, coorx3, coory3);
    
    scanf("%d", &counter);
    
    for (int i; i++ < counter; ) {
        scanf("%lf %lf", &x, &y);
        
        area_tmp1 = triangle_area(x, y, coorx1, coory1, coorx2, coory2);
        area_tmp2 = triangle_area(x, y, coorx1, coory1, coorx3, coory3);
        area_tmp3 = triangle_area(x, y, coorx2, coory2, coorx3, coory3);
        
        sum_area = area_tmp1 + area_tmp2 + area_tmp3;
        
        if (sum_area == area_tri) printf("DALAM\n");
        else printf("LUAR\n");
        
    }
    
    return 0;
}