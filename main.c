#include <stdio.h>

int proverka(int srok, int vklad, int prov){
	int MaxSrok = 365, MinVklad = 10000;
	if (srok > MaxSrok){
		prov++;
	}
	if (vklad < MinVklad){
		prov = prov + 10;
	}
	return prov;
}

int main()
{
	int srok, vklad, prov = 0;
	printf("Введите срок: ");
	scanf("%d", &srok);
	printf("Введите вклад: ");
	scanf("%d", &vklad);

	prov = proverka(srok, vklad, prov);

	while (prov != 0){
		if (prov == 11){
			prov = 0;
			printf("Введите срок еще раз: ");
			scanf("%d", &srok);
			printf("Введите вклад еще раз: ");
			scanf("%d", &vklad);
			prov = proverka(srok, vklad, prov);
		}
		if (prov == 1){
			prov = 0;
			printf("Введите срок еще раз: ");
			scanf("%d", &srok);
			prov = proverka(srok, vklad, prov);
		}
		if (prov == 10){
			prov = 0;
			printf("Введите вклад еще раз: ");
			scanf("%d", &vklad);
			prov = proverka(srok, vklad, prov);
		}
	}
	printf("%d", prov);
	return 0;
}
