#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#define orman123 21 

int hasar=10;
int Mcan=100,can=100;
int def=10;
int ok=10;
int tahm=10;
int zih=10;
int onur=10;
int buyu=10;
int hiz=210;
int altin=100;
int puan=10;
int mes1=1;
int a=1;

int orman(void)
{
	int kemik;
	int say1=(rand()%100);
	
	if(say1>90)
	{
		printf("Altın kesesi buldun(10 altın)\n");
		altin= altin+10;
		printf("Altınınız: %d\n",altin);
		}
	
	else if(say1>80)
	{
		printf("Bir büyücü çıka geldi ve sana bir tür kutsama yaptı.\n");
		buyu= buyu+10;
		printf("Büyü gücünüz: %d\n",buyu);
	}
	
	else if(say1>70)
	{
		printf("Bir tür kapan bitkiye denk geldin. Ondan kaçmak için hamle yaptın ama geç kaldın. Bir tür sıvı ile kaplandın. Artık daha hızlısın?!?!?!?\n");
		hiz= hiz+10;
		printf("Hızınız: %d\n",hiz);
	}
	
	else if(say1>60)
	{
		printf("Bir kemik yığını buluyorsun. Ormanın derinliklerinde kaybolmuş olmalı. Eşyalarını almak ister misin?\n[1]Evet [2]Hayır\nNe yapacaksın:");
		scanf("%d",&kemik);
		if(kemik==1)
		{
			printf("Sunlar bulundu:1 kese altın(100 altın),20 ok, 1 demir kılıç\n");
			altin=altin+ 100;
			ok= ok+20;
			hasar=hasar+30;
			printf("Altınınız: %d\nOkunuz: %d\nHasarınız: %d\n",altin,ok,hasar);
		}
		else
		{
			printf("Hiçbir şey yapmadan onu sonsuz yalnızlığa bıraktın ve devam ettin\n");
		}
	}
	
	else if(say1>50)
	{
		printf("Bir periye denk geldin ve kalbinin biraz daha hızlı attığını farkediyorsun... Uyandın peri yok ama bir şeyler değişmiş.\n");
		Mcan=Mcan+50;
		printf("Canınız: %d/%d\n",can,Mcan);
	}
	
	else
	{
		printf("Ortalıkta hiçbir şey yok\n");
	}
}



	
	int main()
	{
	setlocale(LC_ALL, "Turkish");
	
	int orman1=0,Oorman=0,Korman=0;
	int i1=0,Osayac=0,xsag=0,xsol=0, yyukari=0,yasagi=0,Osecim,Odog;
	int Osay1=0,Osay2=0,Oy=0,Ox=0,Osay=1;
	char Osec;
	int orman12[orman123][orman123];
	int yon=1;
						Osay1=0;
						while(Osay1<21)
						{
							Osay2=0;
							while(Osay2<21)
							{
								orman12[Osay1][Osay2]=0;
								Osay2++;
							}
							Osay1++;
						}
						
						while(Osay!=0)
						{
						
						printf("ileri girmek için w\'ye bas\nsağa gitmek içind\'ye bas\nsola gitmek için a\'ya bas\ngeri dönmek içins\'ye bas\nne yapmak istersin: ");
						scanf(" %c",&Osec);
						printf("%d\n",orman12[20-Oy][10+Ox]);
						
						
						
						if(yon==1)
						{
							if(Osec=='w'||Osec=='W')
							{
								Oy++;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etm0iş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=1;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=2;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=3;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Oy--;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=4;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
		
							}
							else if(Osec=='g'||Osec=='G')
							{
								printf("Çıkmak istiyorsun demek o zaman geldiğin yolu hatırlayıp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
							}
						}
						else if(yon==2)
						{
							if(Osec=='w'||Osec=='W')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=2;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Oy--;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=4;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Oy++;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=1;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=3;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
		
							}
							else if(Osec=='g'||Osec=='G')
							{
								printf("Çıkmak istiyorsun demek o zaman geldiğin yolu hatırlayıp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
							}
						}
						else if(yon==3)
						{
							if(Osec=='w'||Osec=='W')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=3;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Oy++;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=1;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Oy--;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=4;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=2;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
		
							}
							else if(Osec=='g'||Osec=='G')
							{
								printf("Çıkmak istiyorsun demek o zaman geldiğin yolu hatırlayıp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
							}
						}
						else if(yon==4)
						{
							if(Osec=='w'||Osec=='W')
							{
								Oy--;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=4;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=3;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=2;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Oy++;
								if(Oy<19)
								{
									if(orman12[20-Oy][10+Ox]==1)
									{
										printf("buraya önceden gelmişsin ya da başkası talan etmiş\n");
									}
									else
									{
										orman();
									}
									
									orman12[20-Oy][10+Ox]=1;
									yon=1;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
		
							}
							else if(Osec=='g'||Osec=='G')
							{
								printf("Çıkmak istiyorsun demek o zaman geldiğin yolu hatırlayıp geri dönmen gerekir.\n");
								Osay--;
							}
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
							}
						}
						if(yon==1)
						{
							printf(" \t\n\t/ \\\n\t |\n\t |\n\t |\n");
						}

						else if(yon==3)
						{
							printf("<-----\n");
						}

						else if(yon==2)
						{
							printf("        ----->\n");
						}

						else if(yon==4)
						{
							printf(" \t |\n\t |\n\t |\n\t |\n\t\\ /\n");
						}
						
						Osay1=0;
						while(Osay1<21)
						{
							Osay2=0;
							while(Osay2<21)
							{
								printf("%d",orman12[Osay1][Osay2]);
								Osay2++;
							}
							printf("\n");
							Osay1++;
						}
						
						system("pause");
						}

						
						Osay=1;
						while(Osay!=0)
						{
							printf("ileri girmek için w\'ye bas\nsağa gitmek için d\'ye bas\nsola gitmek için a\'ya bas\ngeri dönmek için s\'ye bas\nne yapmak isteresin: ");
							scanf(" %c",&Osec);
	
							if(yon==1)
						{
							if(Osec=='w'||Osec=='W')
							{
								Oy++;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=1;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=2;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=3;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Oy--;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=4;
								}
								else
								{
									//boss fight
									printf("gene iyisin");
								}
		
							}
							
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
							}
						}
						else if(yon==2)
						{
							if(Osec=='w'||Osec=='W')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=2;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Oy--;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=4;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Oy++;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=1;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=3;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
		
							}
							
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
							}
						}
						else if(yon==3)
						{
							if(Osec=='w'||Osec=='W')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=3;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Oy++;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=1;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Oy--;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=4;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=2;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
		
							}
							
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
							}
						}
						else if(yon==4)
						{
							if(Osec=='w'||Osec=='W')
							{
								Oy--;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=4;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='d'||Osec=='D')
							{
								Ox--;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=3;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
	
							else if(Osec=='a'||Osec=='A')
							{
								Ox++;
								if(Ox<9||Ox>(-9))
								{
									orman12[20-Oy][10+Ox]=2;
									yon=2;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
							}
							else if(Osec=='s'||Osec=='S')
							{
								Oy++;
								if(Oy<19)
								{
									orman12[20-Oy][10+Ox]=2;
									yon=1;
								}
								else
								{
									//boss fight
									printf("gene iyisin\n");
								}
		
							}
							
							else
							{
								printf("galiba yanlış bir tuşa bastın\n");
							}
						}
						
						if(yon==1)
						{
							printf(" \t\n\t/ \\\n\t |\n\t |\n\t |\n");
						}

						else if(yon==3)
						{
							printf("<-----\n");
						}

						else if(yon==2)
						{
							printf("        ----->\n");
						}

						else if(yon==4)
						{
							printf(" \t |\n\t |\n\t |\n\t |\n\t\\ /\n");
						}
						
						Osay1=0;
						while(Osay1<21)
						{
							Osay2=0;
							while(Osay2<21)
							{
								printf("%d",orman12[Osay1][Osay2]);
								Osay2++;
							}
							printf("\n");
							Osay1++;
						}
						if(Ox==9 || Ox==(-9) || Oy==20 || Oy==0)
						{
							Osay--;
						}
						
						}
						if(orman12[20][10]==2)
						{
							printf("başarıyla ormandan çıktın. tebrik ederim\n");	
						}
						else
						{
							printf("bir bekçi seni kurtardı ama o geceyi tek başına geçirmenin acısını unutamayacaksın ya seni bulmasaydı(başka ihtimaller getir)\n");
						}
}
