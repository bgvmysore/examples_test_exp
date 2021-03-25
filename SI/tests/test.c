#include "unity.h"
#include "si.h"

void setUp(void){}

void tearDown(void){}

void test_SI_f(void){
    float p = 100.0f, t = 1.0f, r = 1.0f;
    float si;
    TEST_ASSERT_EQUAL_INT(SUCCESS, SI_f(p,t,r,&si) );
    TEST_ASSERT_EQUAL_FLOAT(1.0f, si);
    return;
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_SI_f);

    return UNITY_END();
}