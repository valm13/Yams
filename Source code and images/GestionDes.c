#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ESLib.h"
#include "GestionDes.h"


tbde InitialiseDe(tbde tabde) // Working
{
	for(int i=0;i<5;i++)
	{
		
	tabde.d[i].v = rand() % (5 + 1) + 1;
	tabde.d[i].slct=0;
	printf("dé[%d] = %d \n",i,tabde.d[i].v);
	}
	return tabde;
}

void RegenDe(tbde *tabde) // Working
{
	int i;
	for(i=0;i<5;i++)
	{
	if(	tabde->d[i].slct == 1)
	{
	tabde->d[i].v = rand() % (5 + 1) + 1;
	}
	printf("dé[%d] = %d \n",i,tabde->d[i].v);
	}
	for(i=0;i<5;i++)
	{
		tabde->d[i].slct=0;
	}
}

void RelanceDes(tbde *tabde)
{
	int i;
	for(i=0;i<5;i++)
	{
	{
	tabde->d[i].v = rand() % (5 + 1) + 1;
	}
	printf("\nRelance Auto des dés : \n");
	printf("dé[%d] = %d \n",i,tabde->d[i].v);
	}
	for(i=0;i<5;i++)
	{
		tabde->d[i].slct=0;
	}
}
