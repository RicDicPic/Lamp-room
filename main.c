#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

        printf("        ********************************\n");
        printf("        ********************************\n");
        printf("        **VAMO POR LAMPADA NESSA CASA***\n");
        printf("        ********************************\n");
        printf("        ********************************\n");
        int NC;
        printf("Numero de comodos (ate 6 comodos):");
        scanf("%i", &NC);

        printf("Tipos de comodo:\n1 = Quintal\n2 = Sala\n3 = Quarto\n4 = Cozinha\n5 = Banheiro\n6 = Area\n");

        float Altura, Largura, Comprimento, Tipo, Area;
        int Lampadas[5], A, B, C, D, E, F, Soma;

            switch(NC) {
            case 0:
                printf("Ai e foda tu quer por Lampada na rua??");

break;

            case 1:
                printf("Digite o tipo do comodo:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[0] = ceil(Area / 10);

                if(Tipo == 1) A = 1;
                      else if(Tipo == 2) A = 2;
                        else if(Tipo == 3) A = 3;
                            else if(Tipo == 4) A = 4;
                                else if(Tipo == 5) A = 5;
                                    else if(Tipo == 6) A = 6;

                if(A == 1) printf("O quintal devera conter no minimo %i lampada(s).", Lampadas[0]);
                      else if(A == 2) printf("A sala devera conter no minimo %i lampada(s).", Lampadas[0]);
                        else if(A == 3) printf("O quarto devera conter no minimo %i lampada(s).", Lampadas[0]);
                            else if(A == 4) printf("A cozinha devera conter no minimo %i lampada(s).", Lampadas[0]);
                                else if(A == 5) printf("O banheiro devera conter no minimo %i lampada(s). ", Lampadas[0]);
                                    else if(A == 6) printf("A area devera conter no minimo %i lampada(s). ", Lampadas[0]);

break;
            case 2:
                printf("Digite o tipo do comodo 1:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[0] = ceil(Area / 10);

                if(Tipo == 1) A = 1;
                      else if(Tipo == 2) A = 2;
                        else if(Tipo == 3) A = 3;
                            else if(Tipo == 4) A = 4;
                                else if(Tipo == 5) A = 5;
                                    else if(Tipo == 6) A = 6;

                printf("Digite o tipo do comodo 2:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                 if(Tipo == 1) B = 1;
                      else if(Tipo == 2) B = 2;
                        else if(Tipo == 3) B = 3;
                            else if(Tipo == 4) B = 4;
                                else if(Tipo == 5) B = 5;
                                    else if(Tipo == 6) B = 6;


                  Lampadas[1] = ceil(Area / 10);

                  if(A == 1) printf("O quintal devera conter no minimo %i lampada(s) e ", Lampadas[0]);
                      else if(A == 2) printf("A sala devera conter no minimo %i lampada(s) e ", Lampadas[0]);
                        else if(A == 3) printf("O quarto devera conter no minimo %i lampada(s) e ", Lampadas[0]);
                            else if(A == 4) printf("A cozinha devera conter no minimo %i lampada(s) e ", Lampadas[0]);
                                else if(A == 5) printf("O banheiro devera conter no minimo %i lampada(s) e ", Lampadas[0]);
                                    else if(A == 6) printf("A area devera conter no minimo %i lampada(s) e ", Lampadas[0]);

                  if(B == 1) printf("o quintal devera conter no minimo %i lampada(s), ", Lampadas[1]);
                      else if(B == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[1]);
                        else if(B == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[1]);
                            else if(B == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[1]);
                                else if(B == 5) printf("o banheiro devera conter no minimo %i lampada(s), ", Lampadas[1]);
                                    else if(B == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[1]);

                                    Soma = Lampadas[0] + Lampadas[1];
                                    printf("com um total de %i lampadas na casa", Soma);

break;
            case 3:
                printf("Digite o tipo do comodo 1:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[0] = ceil(Area / 10);

                  if(Tipo == 1) A = 1;
                      else if(Tipo == 2) A = 2;
                        else if(Tipo == 3) A = 3;
                            else if(Tipo == 4) A = 4;
                                else if(Tipo == 5) A = 5;
                                    else if(Tipo == 6) A = 6;

                printf("Digite o tipo do comodo 2:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[1] = ceil(Area / 10);

                  if(Tipo == 1) B = 1;
                      else if(Tipo == 2) B = 2;
                        else if(Tipo == 3) B = 3;
                            else if(Tipo == 4) B = 4;
                                else if(Tipo == 5) B = 5;
                                    else if(Tipo == 6) B = 6;

                printf("Digite o tipo do comodo 3:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[2] = ceil(Area / 10);

                  if(Tipo == 1) C = 1;
                      else if(Tipo == 2) C = 2;
                        else if(Tipo == 3) C = 3;
                            else if(Tipo == 4) C = 4;
                                else if(Tipo == 5) C = 5;
                                    else if(Tipo == 6) C = 6;

                  if(A == 1) printf("O quintal devera conter no minimo %i lampada(s), ", Lampadas[0]);
                      else if(A == 2) printf("A sala devera conter no minimo %i lampada(s), ", Lampadas[0]);
                        else if(A == 3) printf("O quarto devera conter no minimo %i lampada(s), ", Lampadas[0]);
                            else if(A == 4) printf("A cozinha devera conter no minimo %i lampada(s), ", Lampadas[0]);
                                else if(A == 5) printf("O banheiro devera conter no minimo %i lampada(s), ", Lampadas[0]);
                                    else if(A == 6) printf("A area devera conter no minimo %i lampada(s), ", Lampadas[0]);

                  if(B == 1) printf("o quintal devera conter no minimo %i lampada(s), ", Lampadas[1]);
                      else if(B == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[1]);
                        else if(B == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[1]);
                            else if(B == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[1]);
                                else if(B == 5) printf("o banheiro devera conter no minimo %i lampada(s), ", Lampadas[1]);
                                    else if(B == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[1]);

                  if(C == 1) printf("o quintal devera conter no minimo %i lampada(s), ", Lampadas[2]);
                      else if(C == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[2]);
                        else if(C == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[2]);
                            else if(C == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[2]);
                                else if(C == 5) printf("o banheiro devera conter no minimo %i lampada(s), ", Lampadas[2]);
                                    else if(C == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[2]);

                                    Soma = Lampadas[0] + Lampadas[1] + Lampadas[2];
                                    printf("com um total de %i lampadas na casa", Soma);
break;
            case 4:
                printf("Digite o tipo do comodo 1:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[0] = ceil(Area / 10);

                  if(Tipo == 1) A = 1;
                      else if(Tipo == 2) A = 2;
                        else if(Tipo == 3) A = 3;
                            else if(Tipo == 4) A = 4;
                                else if(Tipo == 5) A = 5;
                                    else if(Tipo == 6) A = 6;

                printf("Digite o tipo do comodo 2:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[1] = ceil(Area / 10);

                  if(Tipo == 1) B = 1;
                      else if(Tipo == 2) B = 2;
                        else if(Tipo == 3) B = 3;
                            else if(Tipo == 4) B = 4;
                                else if(Tipo == 5) B = 5;
                                    else if(Tipo == 6) B = 6;

                printf("Digite o tipo do comodo 3:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[2] = ceil(Area / 10);

                  if(Tipo == 1) C = 1;
                      else if(Tipo == 2) C = 2;
                        else if(Tipo == 3) C = 3;
                            else if(Tipo == 4) C = 4;
                                else if(Tipo == 5) C = 5;
                                    else if(Tipo == 6) C = 6;

                printf("Digite o tipo do comodo 4:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo :\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[3] = ceil(Area / 10);

                  if(Tipo == 1) D = 1;
                      else if(Tipo == 2) D = 2;
                        else if(Tipo == 3) D = 3;
                            else if(Tipo == 4) D = 4;
                                else if(Tipo == 5) D = 5;
                                    else if(Tipo == 6) D = 6;

                  if(A == 1) printf("O quintal devera conter no minimo %i lampada(s), ", Lampadas[0]);
                      else if(A == 2) printf("A sala devera conter no minimo %i lampada(s), ", Lampadas[0]);
                        else if(A == 3) printf("O quarto devera conter no minimo %i lampada(s), ", Lampadas[0]);
                            else if(A == 4) printf("A cozinha devera conter no minimo %i lampada(s), ", Lampadas[0]);
                                else if(A == 5) printf("O banheiro devera conter no minimo %i lampada(s), ", Lampadas[0]);
                                    else if(A == 6) printf("A area devera conter no minimo %i lampada(s), ", Lampadas[0]);

                  if(B == 1) printf("o quintal devera conter no minimo %i lampada(s), ", Lampadas[1]);
                      else if(B == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[1]);
                        else if(B == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[1]);
                            else if(B == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[1]);
                                else if(B == 5) printf("o banheiro devera conter no minimo %i lampada(s), ", Lampadas[1]);
                                    else if(B == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[1]);

                  if(C == 1) printf("o quintal devera conter no minimo %i lampada(s) e ", Lampadas[2]);
                      else if(C == 2) printf("a sala devera conter no minimo %i lampada(s) e ", Lampadas[2]);
                        else if(C == 3) printf("o quarto devera conter no minimo %i lampada(s) e ", Lampadas[2]);
                            else if(C == 4) printf("a cozinha devera conter no minimo %i lampada(s) e ", Lampadas[2]);
                                else if(C == 5) printf("o banheiro devera conter no minimo %i lampada(s) e ", Lampadas[2]);
                                    else if(C == 6) printf("a area devera conter no minimo %i lampada(s) e ", Lampadas[2]);

                  if(D == 1) printf("o quintal devera conter no minimo %i lampada(s), ", Lampadas[3]);
                      else if(D == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[3]);
                        else if(D == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[3]);
                            else if(D == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[3]);
                                else if(D == 5) printf("o banheiro devera conter no minimo %i lampada(s), ", Lampadas[3]);
                                    else if(D == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[3]);

                                    Soma = Lampadas[0] + Lampadas[1] + Lampadas[2] + Lampadas[3];
                                    printf("com um total de %i lampadas na casa.", Soma);
break;
            case 5:
                printf("Digite o tipo do comodo 1:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[0] = ceil(Area / 10);

                  if(Tipo == 1) A = 1;
                      else if(Tipo == 2) A = 2;
                        else if(Tipo == 3) A = 3;
                            else if(Tipo == 4) A = 4;
                                else if(Tipo == 5) A = 5;
                                    else if(Tipo == 6) A = 6;

                printf("Digite o tipo do comodo 2:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[1] = ceil(Area / 10);

                  if(Tipo == 1) B = 1;
                      else if(Tipo == 2) B = 2;
                        else if(Tipo == 3) B = 3;
                            else if(Tipo == 4) B = 4;
                                else if(Tipo == 5) B = 5;
                                    else if(Tipo == 6) B = 6;

                printf("Digite o tipo do comodo 3:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[2] = ceil(Area / 10);

                  if(Tipo == 1) C = 1;
                      else if(Tipo == 2) C = 2;
                        else if(Tipo == 3) C = 3;
                            else if(Tipo == 4) C = 4;
                                else if(Tipo == 5) C = 5;
                                    else if(Tipo == 6) C = 6;

                printf("Digite o tipo do comodo 4:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[3] = ceil(Area / 10);

                  if(Tipo == 1) D = 1;
                      else if(Tipo == 2) D = 2;
                        else if(Tipo == 3) D = 3;
                            else if(Tipo == 4) D = 4;
                                else if(Tipo == 5) D = 5;
                                    else if(Tipo == 6) D = 6;

                printf("Digite o tipo do comodo 5:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[4] = ceil(Area / 10);

                  if(Tipo == 1) E = 1;
                      else if(Tipo == 2) E = 2;
                        else if(Tipo == 3) E = 3;
                            else if(Tipo == 4) E = 4;
                                else if(Tipo == 5) E = 5;
                                    else if(Tipo == 6) E = 6;

                  if(A == 1) printf("O quintal devera conter no minimo %i lampada(s), ", Lampadas[0]);
                      else if(A == 2) printf("A sala devera conter no minimo %i lampada(s), ", Lampadas[0]);
                        else if(A == 3) printf("O quarto devera conter no minimo %i lampada(s), ", Lampadas[0]);
                            else if(A == 4) printf("A cozinha devera conter no minimo %i lampada(s), ", Lampadas[0]);
                                else if(A == 5) printf("O banheiro devera conter no minimo %i lampada(s), ", Lampadas[0]);
                                    else if(A == 6) printf("A area devera conter no minimo %i lampada(s), ", Lampadas[0]);

                  if(B == 1) printf("o quintal devera conter no minimo %i lampada(s), ", Lampadas[1]);
                      else if(B == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[1]);
                        else if(B == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[1]);
                            else if(B == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[1]);
                                else if(B == 5) printf("o banheiro devera conter no minimo %i lampada(s), ", Lampadas[1]);
                                    else if(B == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[1]);

                  if(C == 1) printf("o quintal devera conter no minimo %i lampada(s) e ", Lampadas[2]);
                      else if(C == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[2]);
                        else if(C == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[2]);
                            else if(C == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[2]);
                                else if(C == 5) printf("o banheiro devera conter no minimo %i lampada(s), ", Lampadas[2]);
                                    else if(C == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[2]);

                  if(D == 1) printf("o quintal devera conter no minimo %i lampada(s) e ", Lampadas[3]);
                      else if(D == 2) printf("a sala devera conter no minimo %i lampada(s) e ", Lampadas[3]);
                        else if(D == 3) printf("o quarto devera conter no minimo %i lampada(s) e ", Lampadas[3]);
                            else if(D == 4) printf("a cozinha devera conter no minimo %i lampada(s) e ", Lampadas[3]);
                                else if(D == 5) printf("o banheiro devera conter no minimo %i lampada(s) e ", Lampadas[3]);
                                    else if(D == 6) printf("a area devera conter no minimo %i lampada(s) e ", Lampadas[3]);

                   if(E == 1) printf("o quintal devera conter no minimo %i lampada(s), ", Lampadas[4]);
                      else if(E == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[4]);
                        else if(E == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[4]);
                            else if(E == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[4]);
                                else if(E == 5) printf("o banheiro devera conter no minimo %i lampada(s), ", Lampadas[4]);
                                    else if(E == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[4]);

                                    Soma = Lampadas[0] + Lampadas[1] + Lampadas[2] + Lampadas[3] + Lampadas[4];
                                    printf("com um total de %i lampadas na casa.", Soma);
break;

            case 6:
                printf("Digite o tipo do comodo 1:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[0] = ceil(Area / 10);

                  if(Tipo == 1) A = 1;
                      else if(Tipo == 2) A = 2;
                        else if(Tipo == 3) A = 3;
                            else if(Tipo == 4) A = 4;
                                else if(Tipo == 5) A = 5;
                                    else if(Tipo == 6) A = 6;

                printf("Digite o tipo do comodo 2:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[1] = ceil(Area / 10);

                  if(Tipo == 1) B = 1;
                      else if(Tipo == 2) B = 2;
                        else if(Tipo == 3) B = 3;
                            else if(Tipo == 4) B = 4;
                                else if(Tipo == 5) B = 5;
                                    else if(Tipo == 6) B = 6;

                printf("Digite o tipo do comodo 3:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[2] = ceil(Area / 10);

                  if(Tipo == 1) C = 1;
                      else if(Tipo == 2) C = 2;
                        else if(Tipo == 3) C = 3;
                            else if(Tipo == 4) C = 4;
                                else if(Tipo == 5) C = 5;
                                    else if(Tipo == 6) C = 6;

                printf("Digite o tipo do comodo 4:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[3] = ceil(Area / 10);

                  if(Tipo == 1) D = 1;
                      else if(Tipo == 2) D = 2;
                        else if(Tipo == 3) D = 3;
                            else if(Tipo == 4) D = 4;
                                else if(Tipo == 5) D = 5;
                                    else if(Tipo == 6) D = 6;

                printf("Digite o tipo do comodo 5:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[4] = ceil(Area / 10);

                  if(Tipo == 1) E = 1;
                      else if(Tipo == 2) E = 2;
                        else if(Tipo == 3) E = 3;
                            else if(Tipo == 4) E = 4;
                                else if(Tipo == 5) E = 5;
                                    else if(Tipo == 6) E = 6;

                printf("Digite o tipo do comodo 6:");
                scanf("%f", &Tipo);
                printf("\nDimensoes do comodo:\nAltura:");
                scanf("%f", &Altura);
                printf("Largura:");
                scanf("%f", &Largura);
                printf("Comprimento:");
                scanf("%f", &Comprimento);
                Area = Altura * Comprimento * Largura;

                  Lampadas[5] = ceil(Area / 10);

                  if(Tipo == 1) F = 1;
                      else if(Tipo == 2) F = 2;
                        else if(Tipo == 3) F = 3;
                            else if(Tipo == 4) F = 4;
                                else if(Tipo == 5) F = 5;
                                    else if(Tipo == 6) F = 6;

                  if(A == 1) printf("O quintal devera conter no minimo %i lampada(s), ", Lampadas[0]);
                      else if(A == 2) printf("A sala devera conter no minimo %i lampada(s), ", Lampadas[0]);
                        else if(A == 3) printf("O quarto devera conter no minimo %i lampada(s), ", Lampadas[0]);
                            else if(A == 4) printf("A cozinha devera conter no minimo %i lampada(s), ", Lampadas[0]);
                                else if(A == 5) printf("O banheiro devera conter no minimo %i lampada(s), ", Lampadas[0]);
                                    else if(A == 6) printf("A area devera conter no minimo %i lampada(s), ", Lampadas[0]);

                  if(B == 1) printf("o quintal devera conter no minimo %i lampada(s), ", Lampadas[1]);
                      else if(B == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[1]);
                        else if(B == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[1]);
                            else if(B == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[1]);
                                else if(B == 5) printf("o banheiro devera conter no minimo %i lampada(s), ", Lampadas[1]);
                                    else if(B == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[1]);

                  if(C == 1) printf("o quintal devera conter no minimo %i lampada(s) e ", Lampadas[2]);
                      else if(C == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[2]);
                        else if(C == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[2]);
                            else if(C == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[2]);
                                else if(C == 5) printf("o banheiro devera conter no minimo %i lampada(s), ", Lampadas[2]);
                                    else if(C == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[2]);

                  if(D == 1) printf("o quintal devera conter no minimo %i lampada(s), ", Lampadas[3]);
                      else if(D == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[3]);
                        else if(D == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[3]);
                            else if(D == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[3]);
                                else if(D == 5) printf("o banheiro devera conter no minimo %i lampada(s),", Lampadas[3]);
                                    else if(D == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[3]);

                   if(E == 1) printf("o quintal devera conter no minimo %i lampada(s) e ", Lampadas[4]);
                      else if(E == 2) printf("a sala devera conter no minimo %i lampada(s) e ", Lampadas[4]);
                        else if(E == 3) printf("o quarto devera conter no minimo %i lampada(s) e ", Lampadas[4]);
                            else if(E == 4) printf("a cozinha devera conter no minimo %i lampada(s) e ", Lampadas[4]);
                                else if(E == 5) printf("o banheiro devera conter no minimo %i lampada(s) e ", Lampadas[4]);
                                    else if(E == 6) printf("a area devera conter no minimo %i lampada(s) e ", Lampadas[4]);

                   if(F == 1) printf("o quintal devera conter no minimo %i lampada(s), ", Lampadas[5]);
                      else if(F == 2) printf("a sala devera conter no minimo %i lampada(s), ", Lampadas[5]);
                        else if(F == 3) printf("o quarto devera conter no minimo %i lampada(s), ", Lampadas[5]);
                            else if(F == 4) printf("a cozinha devera conter no minimo %i lampada(s), ", Lampadas[5]);
                                else if(F == 5) printf("o banheiro devera conter no minimo %i lampada(s), ", Lampadas[5]);
                                    else if(F == 6) printf("a area devera conter no minimo %i lampada(s), ", Lampadas[5]);

                                    Soma = Lampadas[0] + Lampadas[1] + Lampadas[2] + Lampadas[3] + Lampadas[4] + Lampadas[5];
                                    printf("com um total de %i lampadas na casa.", Soma);
break;

            default:
                printf("Invalido");
break;


            }



    return 0;
}
