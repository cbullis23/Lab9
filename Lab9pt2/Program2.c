#include <stdio.h>

int nfl(int score) {
	for(int i=0; i<=score/8;i++){
		for(int j=0; j<=(score-8*i)/7; j++){
			for(int k=0; k<=(score-7*i)/6;k++){
				for(int l=0; l<=(score-6*i)/3;l++){
					for(int m=0; m<=(score-3*i)/2;m++){
						if(i*8+j*7+k*6+l*3+m*2==score){
							printf("%d TD + 2pt, %d TD + EXP, %d TD, %d FG, %d SF\n", i, j, k, l, m);	
						}
						else{
							continue;
						}
					}
				}
			}
		}
	}
	return 0;
}

int main(){
	int score;
	while(1){
		printf("Enter 0 or 1 to STOP ");
		printf("Enter the NFL Score: ");
		scanf("%d", score);
		if(score <= 1){
			break;
		}
		nfl(score);
	}
	return 0;
}
