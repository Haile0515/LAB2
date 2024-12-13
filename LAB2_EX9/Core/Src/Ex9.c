/*
 * Ex9.c
 *
 *  Created on: Sep 28, 2024
 *      Author: ADMIN
 */

#include "main.h"
#include "Ex9.h"

void display8MATRIX(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);

			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);

			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);

			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);

			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);

			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);

			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);

			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);

			HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
			HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
			HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
			HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
			HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
			HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
			HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
			HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
			break;
		default:
			break;
	}
}

extern int index_led_matrix;
//int index_led_matrix;
//const int MAX_LED_MATRIX = 8;
uint8_t matrix_buffer [8] = {0x00 ,0x01 ,0x02 ,0x03 ,0x04 ,0x05 ,0x06 ,0x07};
void updateLEDMatrix (int index_led_matrix){
	switch(index_led_matrix){
		case 0:
			display8MATRIX(matrix_buffer[0]);
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 1:
			display8MATRIX(matrix_buffer[1]);
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 2:
			display8MATRIX(matrix_buffer[2]);
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 3:
			display8MATRIX(matrix_buffer[3]);
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 4:
			display8MATRIX(matrix_buffer[4]);
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 5:
			display8MATRIX(matrix_buffer[5]);
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 6:
			display8MATRIX(matrix_buffer[6]);
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		case 7:
			display8MATRIX(matrix_buffer[7]);
			HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
			break;
		default:
			break;
	}
}
