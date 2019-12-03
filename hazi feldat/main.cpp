
#include <iostream>



int max_e=999999;

int v[100][100], n;

using namespace std;





int balfelso(int i, int j){

    if (i-1 < 0) {  return max_e;}

    if (j-1 < 0) { return max_e;}

    return v[i-1][j-1];

}



int felso(int i, int j){

    if (i-1 < 0) {  return max_e;}



    return v[i-1][j];

}



int jobbfelso(int i, int j){

    if (i-1 < 0) {  return max_e;}

    if (j+1 >= n) { return max_e;}

    return v[i-1][j+1];

}



int bal(int i, int j){

    if (j-1 < 0) {  return max_e;}



    return v[i][j-1];

}



int jobb(int i, int j){

    if (j+1 >= n) {  return max_e;}



    return v[i][j+1];

}



int balalso(int i, int j){

    if (j-1 < 0) {  return max_e;}

    if (i+1 >= n) {return max_e;}

    return v[i+1][j-1];

}



int also(int i, int j){

    if (i+1 >= n) {  return max_e;}



    return v[i+1][j];

}



int jobbalso(int i, int j){

    if (i+1 >= n) {  return max_e;}

    if (j+1 >= n) { return max_e;}

    return v[i+1][j+1];

}



int main()

{



    return 0;

}
