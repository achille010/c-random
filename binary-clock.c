#include <stdio.h>

void toBin(int n, int stor[4]){
	for(int i = 3; i >= 0; i--){
		stor[i] = n % 2;
		n /= 2;
	}
}

int main(){
	int h, m, s;
	
	printf("Input hours (0 - 23): ");
	if(scanf("%d", &h) != 1 || h >= 24 || h < 0){
		printf("Invalid input! Can't proceed!");
		return 1;
	}
	
	printf("Input minutes (0 - 59): ");
	if(scanf("%d", &m) != 1 || m >= 60 || m < 0){
		printf("Invalid input! Can't proceed!");
		return 1;
	}
	
	printf("Input seconds (0 - 59): ");
	if(scanf("%d", &s) != 1 || s >= 60 || s < 0){
		printf("Invalid input! Can't proceed!");
		return 1;
	}
	
	int h_t = h / 10;
	int h_o = h % 10;
	
	int m_t = m / 10;
	int m_o = m % 10;
	
	int s_t = s / 10;
	int s_o = s % 10;
	
	
	int h_t_bin[4];
	int h_o_bin[4];
	
	int m_t_bin[4];
	int m_o_bin[4];
	
	int s_t_bin[4];
	int s_o_bin[4];
	
	
	toBin(h_t, h_t_bin);
	toBin(h_o, h_o_bin);
	
	toBin(m_t, m_t_bin);
	toBin(m_o, m_o_bin);
	
	toBin(s_t, s_t_bin);
	toBin(s_o, s_o_bin);
	
	printf("\nBinary Clock representation: \n\n");
	for(int i = 0; i < 4; i ++){
		printf("%d%d %d%d %d%d\n"
			,h_t_bin[i] ,h_o_bin[i]
			,m_t_bin[i] ,m_o_bin[i]
			,s_t_bin[i] ,s_o_bin[i]
		);
		
	}
	
	printf("----------\n");
	printf("%02d:%02d:%02d", h, m, s);
	
	
	return 0;
}