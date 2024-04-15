#include <stdio.h>

// 전달된 전류값에 대해 각도를 계산하는 함수
float current_to_degree(float current) {
    return 45.0 - 3.75 * current; // 정확한 부동 소수점 연산을 위해 15.0/4.0 대신 3.75 사용
}

int main(void) {
    float current;
    printf("Enter the current(mA) value : ");
    
    // 사용자로부터 전류값 입력 받기
    if (scanf("%f", &current) != 1) { // scanf의 반환 값을 확인하여 잘못된 입력에 대한 처리 추가
        printf("Invalid input format!!"); // 잘못된 입력 형식에 대한 오류 메시지 출력
        return 1; // 오류로 인해 비정상적으로 종료됨을 나타내는 종료 코드 반환
    }
    
    printf("current : %.2f mA\n", current); // 부동 소수점 값 출력 형식 수정
    
    // 입력된 전류값이 유효한 범위 내에 있는지 확인
    if (current >= 4 && current <= 20) { // 입력값이 범위 내에 있는지 확인
        printf("degree : %.2fº \n", current_to_degree(current)); // 해당 각도 출력
    } else {
        printf("Invalid value!!"); // 입력값이 유효하지 않은 경우 오류 메시지 출력
        return 1; // 오류로 인해 비정상적으로 종료됨을 나타내는 종료 코드 반환
    }
    
    return 0; // 프로그램이 성공적으로 종료됨을 나타내는 종료 코드 반환
}
