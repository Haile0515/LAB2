///*
// * Ex10.c
// *
// *  Created on: Oct 1, 2024
// *      Author: ADMIN
// */
//
//
#include "main.h"
#include "Ex10.h"

uint8_t matrix_buffer [8] = {0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
void display8MATRIX(int index){
//	switch(num){
//			case 0:
//				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
//				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
//				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
//				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
//				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
//				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
//				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
//				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);
//				break;
//			case 1:
//				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
//				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
//				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
//				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
//				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
//				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
//				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
//				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
//				break;
//			case 2:
//				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
//				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
//				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
//				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
//				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
//				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
//				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
//				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
//				break;
//			case 3:
//				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
//				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
//				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
//				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
//				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
//				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
//				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
//				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
//				break;
//			case 4:
//				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
//				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
//				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
//				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
//				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
//				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
//				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
//				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
//				break;
//			case 5:
//				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
//				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
//				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
//				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
//				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
//				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
//				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
//				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
//				break;
//			case 6:
//				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
//				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
//				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
//				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
//				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
//				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
//				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
//				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
//				break;
//			case 7:
//				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
//				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
//				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
//				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
//				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
//				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
//				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
//				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
//				break;
//			default:
//				break;
//	}
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (index & 1));
	index = index >> 1;
    HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (index & 1));
    index = index >> 1;
    HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (index & 1));
    index = index >> 1;
}

int index_led_matrix = 0;


//void updateLEDMatrix(int index_led_matrix) {
//
//    switch (index_led_matrix) {
//        case 0:
//        	clearRow();
//            display8MATRIX(matrix_buffer[0]);
//            HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
//            break;
//        case 1:
//        	clearRow();
//            display8MATRIX(matrix_buffer[1]);
//            HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
//            break;
//        case 2:
//        	clearRow();
//            display8MATRIX(matrix_buffer[2]);
//            HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
//            break;
//        case 3:
//        	clearRow();
//            display8MATRIX(matrix_buffer[3]);
//            HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
//            break;
//        case 4:
//        	clearRow();
//            display8MATRIX(matrix_buffer[4]);
//            HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
//            break;
//        case 5:
//        	clearRow();
//            display8MATRIX(matrix_buffer[5]);
//            HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
//            break;
//        case 6:
//        	clearRow();
//            display8MATRIX(matrix_buffer[6]);
//            HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
//            break;
//        case 7:
//        	clearRow();
//            display8MATRIX(matrix_buffer[7]);
//            HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
//            break;
//        default:
//            break;
//    }
//}

void updateLEDMatrix(int index){
	switch(index){
	case 0:
		HAL_GPIO_WritePin(GPIOB, ROW1_Pin|ROW2_Pin|ROW3_Pin|ROW4_Pin|ROW5_Pin|ROW6_Pin|ROW7_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin, 1);
		display8MATRIX(matrix_buffer[index]);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin|ROW2_Pin|ROW3_Pin|ROW4_Pin|ROW5_Pin|ROW6_Pin|ROW7_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, ROW1_Pin, 1);
		display8MATRIX(matrix_buffer[index]);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin|ROW1_Pin|ROW3_Pin|ROW4_Pin|ROW5_Pin|ROW6_Pin|ROW7_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, ROW2_Pin, 1);
		display8MATRIX(matrix_buffer[index]);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin|ROW1_Pin|ROW2_Pin|ROW4_Pin|ROW5_Pin|ROW6_Pin|ROW7_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, ROW3_Pin, 1);
		display8MATRIX(matrix_buffer[index]);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin|ROW1_Pin|ROW2_Pin|ROW3_Pin|ROW5_Pin|ROW6_Pin|ROW7_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, ROW4_Pin, 1);
		display8MATRIX(matrix_buffer[index]);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin|ROW1_Pin|ROW2_Pin|ROW3_Pin|ROW4_Pin|ROW6_Pin|ROW7_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, ROW5_Pin, 1);
		display8MATRIX(matrix_buffer[index]);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin|ROW1_Pin|ROW2_Pin|ROW3_Pin|ROW4_Pin|ROW5_Pin|ROW7_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, ROW6_Pin, 1);
		display8MATRIX(matrix_buffer[index]);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, ROW0_Pin|ROW1_Pin|ROW2_Pin|ROW3_Pin|ROW4_Pin|ROW5_Pin|ROW6_Pin, 0);
		HAL_GPIO_WritePin(GPIOB, ROW7_Pin, 1);
		display8MATRIX(matrix_buffer[index]);
		break;
	default:
		break;
	}
}

const int MAX_LED_MATRIX = 8;
void updateMatrixbuffer() {
    for (int i = 0; i < MAX_LED_MATRIX; ++i) {
        matrix_buffer[i] = (matrix_buffer[i] >> 1) | ((matrix_buffer[i] & 1) << 7);
    }
}

