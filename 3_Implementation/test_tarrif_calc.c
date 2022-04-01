#include "unity.h"
#include "tarrif_calc.h"
void test_tarrif_calc(void);

void setUp(void)
{

}

void tearDown(void)
{

}

void test_Residential()
{
    TEST_ASSERT_EQUAL(173.00, Residential(40,50,40));

}
void test_Commercial()
{
    TEST_ASSERT_EQUAL(281.00, Commercial(60, 50 , 40));
}
void test_Industrial()
{
    TEST_ASSERT_EQUAL(204.50, Industrial(30,50,40));
}
int main()
{
    
  
   
    UnityBegin(NULL);
    
    RUN_TEST(test_Residential);
    RUN_TEST(test_Commercial);
    RUN_TEST(test_Industrial);
    
    return(UnityEnd());

    
    

}
