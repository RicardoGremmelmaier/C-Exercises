#include <stdio.h>

int arredonda (double num);

int main()
{
    double num;
    printf("Digite o numero!\n");
    scanf("%lf", &num);
    printf("\n\n");
    printf("Arredondamento: %d", arredonda(num));



return 0;
}



int arredonda (double num)
{
    int num_int;
    if(num< 0)
      return (int)(num- 0.5);
    else
      return (int)(num + 0.5);

}
