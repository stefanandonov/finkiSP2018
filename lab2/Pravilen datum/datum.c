#include<stdio.h>



int main() {
	
	int den, mesec, godina;
	
	scanf("%d %d %d", &den, &mesec, &godina);
	
	switch (mesec){
		case 1: //januari
			printf((den>=1&&den<=31) ? "DA" : "NE");
			break;
		case 2: //fevruari
			if (den==29){
				if (godina%400==0 || (godina%4==0 && godina%100!=0))
					printf("DA");
				else
					printf("NE");
			}
			else if (den>=1 && den<=28){
				printf("DA");
			}
			else {
				printf("NE");
			}
			break;
		case 3: //mart
			printf((den>=1 && den<=31) ? "DA" : "NE");
			break;
		case 4: //april
			printf((den>=1 && den<=30) ? "DA" : "NE");
			break;
		case 5: //maj
			printf((den>=1 && den<=31) ? "DA" : "NE");
			break;
		case 6: //juni
			printf((den>=1 && den<=30) ? "DA" : "NE");
			break;
		case 7: //juli
			printf((den>=1 && den<=31) ? "DA" : "NE");
			break;
		case 8: // avgust
			printf((den>=1 && den<=31) ? "DA" : "NE");
			break;
		case 9: // septemvri
			printf((den>=1 && den<=30) ? "DA" : "NE");
			break;
		case 10: //oktomvri
			printf((den>=1 && den<=31) ? "DA" : "NE");
			break;
		case 11: //noemvri
			printf((den>=1 && den<=30) ? "DA" : "NE");
			break;
		case 12: //dekemvri
			printf((den>=1 && den<=31) ? "DA" : "NE");
			break;
		default:
			printf("NE");
			break;
		
	}
	
	
	return 0;
}