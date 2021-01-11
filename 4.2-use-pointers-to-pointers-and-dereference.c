/* 
 * Otimo link para visualizar o que acontece na memoria na hora da desreferenciação
 * https://courses.edx.org/courses/course-v1:Dartmouth_IMTx+DART.IMT.C.04+1T2020/courseware/b0efc6858fa44aeeb0b482018e0abf01/622f95d2f08e4f0db6fb9770a31464d0/?activate_block_id=block-v1%3ADartmouth_IMTx%2BDART.IMT.C.04%2B1T2020%2Btype%40sequential%2Bblock%40622f95d2f08e4f0db6fb9770a31464d0
 *
 */

#include <stdio.h>
void setToZero(short **);
int main(){
     //! showMemory(cursors=[t, t[0], t[1]],start=65520)
    short a[3] = {1245, 1924, 234};
    short b[2] = {24, 256};
    short * t[2] = {a,b};
    setToZero(t);
    return 0;
}
void setToZero(short ** t){
    *(*t) = 0;       //t[0][0]  OR  *(t[0] + 0)
    *((*t) + 1) = 0; //t[0][1]  OR *(t[0] + 1)
    *((*t) + 2) = 0; //t[0][2]  OR *(t[0] + 2)
    *(*(t+1)) = 0;   //t[1][0]  OR *(t[1] + 0)
    *(*(t+1)+1) = 0; //t[1][1]  OR *(t[1] + 1)
}
