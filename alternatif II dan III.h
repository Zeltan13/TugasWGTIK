#ifndef ALTERNATIF_II_DAN_III_H_INCLUDED
#define ALTERNATIF_II_DAN_III_H_INCLUDED
#include <iostream>
using namespace std;

#define Head(Q) (Q).Head
#define Tail(Q) (Q).Tail

const int IDXMAX = 4;
typedef char infotype;
typedef int adr;
struct Queue {
    infotype T[IDXMAX];
    adr Head,Tail;
};

Queue createQueue_1301213374(Queue &Q);
//Alternatif II
bool isEmptyAlternatifII_1301213374(Queue Q);
bool isFullAlternatifII_1301213374(Queue Q);
void enqueueAlternatifII_1301213374(Queue &Q,infotype p);
void dequeueAlternatifII_1301213374(Queue &Q,infotype p);

//Alternatif III
bool isEmptyAlternatifIII_1301213374(Queue Q);
bool isFullAlternatifIII_1301213374(Queue Q);
void enqueueAlternatifIII_1301213374(Queue &Q,infotype p);
void dequeueAlternatifIII_1301213374(Queue &Q,infotype p);

void showAllData_1301213374(Queue Q);
void checkEmptyFullAltII_1301213374(Queue Q);
void checkEmptyFullAltIII_1301213374(Queue Q);
#endif // ALTERNATIF_II_DAN_III_H_INCLUDED
