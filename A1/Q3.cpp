//
// Created by bobby on 2018-01-13.
//
#include "Q3.h"

int away_div (int num, int denom){
    if (num%denom == 0)
        return num/denom;
    else if (num/denom > 0)
        return (num/denom + 1);
    else
        return (num/denom - 1);
}

int closest_div(int num,int denom){
    if (num%denom >= 5)
        return num/denom + 1;
    else
        return num/denom;
}

int num_pizzas(int num_people, int slices_per_pizza,int slizes_each){
    return away_div(num_people*slizes_each, slices_per_pizza);
}

int min_tiles(int tw, int th, int rw, int rh){
    if ((away_div(rw, tw) * away_div(rh, th)) >= (away_div(rw, th) * away_div(rh, tw)))
        return (away_div(rw, th) * away_div(rh, tw));
    else
        return (away_div(rw, tw) * away_div(rh, th));
}