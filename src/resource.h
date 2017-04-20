#include "utilities.h"

void add_time(double **res_adding, int time_trait, int rows, int time_para,
              int age_trait);

void res_add(double **res_adding, int rows, int add, int type, int K_add);

void res_place(double **make, double **old, int res_added, int old_number, 
               int traits, int realised, int age);

void res_remove(double **res_removing, int rows, int rm_row, int type, int K);

void res_landscape_interaction(double **resource_array, int resource_type_col,
                               int resource_type, int resource_col, int rows,
                               int resource_effect, double ***landscape, 
                               int landscape_layer);