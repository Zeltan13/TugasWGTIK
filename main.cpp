#include "alternatif II dan III.h"
int main()
{
    Queue Q;
    infotype p;
    cout<<IDXMAX<<endl;

    //Alternatif II
    cout<<"Queue Alternatif II"<<endl<<endl;
    createQueue_1301213374(Q);

    checkEmptyFullAltII_1301213374(Q);

    enqueueAlternatifII_1301213374(Q,'K');
    enqueueAlternatifII_1301213374(Q,'A');
    dequeueAlternatifII_1301213374(Q,p);
    enqueueAlternatifII_1301213374(Q,'T');
    dequeueAlternatifII_1301213374(Q,p);
    enqueueAlternatifII_1301213374(Q,'E');

    enqueueAlternatifII_1301213374(Q,'L');
    enqueueAlternatifII_1301213374(Q,'U');

    showAllData_1301213374(Q);
    checkEmptyFullAltII_1301213374(Q);

    enqueueAlternatifII_1301213374(Q,'V');
    cout<<endl;
    //Alternatif III
    cout<<"Queue Alternatif III"<<endl<<endl;
    Queue R;
    infotype s;

    createQueue_1301213374(R);
    checkEmptyFullAltIII_1301213374(R);
    //cout<<Head(R)<<Tail(R)<<endl;
    enqueueAlternatifIII_1301213374(R,'K');
    //cout<<Head(R)<<Tail(R)<<endl;
    enqueueAlternatifIII_1301213374(R,'A');
    //cout<<Head(R)<<Tail(R)<<endl;
    dequeueAlternatifIII_1301213374(R,s);
    //cout<<Head(R)<<Tail(R)<<endl;
    enqueueAlternatifIII_1301213374(R,'T');
    //cout<<Head(R)<<Tail(R)<<endl;
    enqueueAlternatifIII_1301213374(R,'E');
    //cout<<Head(R)<<Tail(R)<<endl;
    dequeueAlternatifIII_1301213374(R,s);
    //cout<<Head(R)<<Tail(R)<<endl;
    enqueueAlternatifIII_1301213374(R,'L');
    //cout<<Head(R)<<Tail(R)<<endl;
    showAllData_1301213374(R);
    enqueueAlternatifIII_1301213374(R,'U');
    showAllData_1301213374(R);
    checkEmptyFullAltIII_1301213374(R);

    enqueueAlternatifIII_1301213374(R,'Y');

    cout << "Hello world!" << endl;
    return 0;
}
