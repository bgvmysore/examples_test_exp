#include "unity.h"
#include "../source/includes/circles.h"

void setUp(void){
    return;
}

void tearDown(){
    return;
}

void test_perimeter_of_circle(void){
    TEST_ASSERT_EQUAL_FLOAT(0, perimeter_of_circle(0));
    TEST_ASSERT_EQUAL_FLOAT((2*3.141592f), perimeter_of_circle(1.0f));
    TEST_ASSERT_EQUAL_FLOAT(307.876, perimeter_of_circle('1'));
    TEST_ASSERT_TRUE(perimeter_of_circle(11.12f)>=0);
}

void test_area_of_circle(void){
    TEST_ASSERT_EQUAL_FLOAT(0, area_of_circle(0));
    TEST_ASSERT_EQUAL_FLOAT((3.141592f), area_of_circle(1.0f));
    TEST_ASSERT_EQUAL_FLOAT(7238.228, area_of_circle('0'));
    TEST_ASSERT_TRUE(area_of_circle(11.12f)>=0);
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_perimeter_of_circle);
    RUN_TEST(test_area_of_circle);

    return UNITY_END();
}