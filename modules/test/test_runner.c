/*
 * file: test_runner.c
 * author: Michael Brockus
 * gmail: <michaelbrockus@gmail.com>
 */
#include <unity.h>

/*
 *  Prototype functions for setup and teardown.
 */
extern void setUp(void);
extern void tearDown(void);

/*
 *  Prototype functions from the external test file.
 */
extern void test_simpleAssertTrue(void);
extern void test_simpleAssertNull(void);
extern void test_simpleAssertCall(void);

/*
 *  This function runs test from the external test
 *  file.
 */
int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_simpleAssertTrue);
    RUN_TEST(test_simpleAssertNull);
    RUN_TEST(test_simpleAssertCall);

    return UNITY_END();
} //end of function main