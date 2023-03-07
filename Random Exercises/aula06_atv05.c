#include <stdio.h>
int main(void){
    int h1, m1, s1, h2, m2, s2;

    printf("Entre com o primero horario: 'ex.: 24 59 59'\n");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("Entre com o segundo horario:\n");
    scanf("%d %d %d", &h2, &m2, &s2);
    s1 += s2;
    m1 += m2;
    h1 += h2;

    while(s1>60){
        ++m1;
        s1 = s1-60;
    }
    while(m1>60){
        ++h1;
        m1 = m1-60;
    }

    printf("Hora: %d\nMinuto: %d\nSegundo: %d", h1, m1, s1);


}
