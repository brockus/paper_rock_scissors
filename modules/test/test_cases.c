/*
 * file: test_cases.c
 * author: Michael Brockus
 * gmail: <michaelbrockus@gmail.com>
 */
#include <unity.h>

/*
 * This function is called from project.c
 */
extern const char *greet(void);

/*
 *  Prototype functions from the external test file.
 */
void test_simpleAssertTrue(void);
void test_simpleAssertNull(void);
void test_simpleAssertCall(void);

/*
 *  Functions for setup and teardown.
 */
void setUp(void)
{
    // TODO.
} //end of function setUp

void tearDown(void)
{
    // TODO.
} //end of function tearDown

void test_simpleAssertTrue(void)
{
    TEST_ASSERT_TRUE(1);
} //end of test case

void test_simpleAssertNull(void)
{
    TEST_ASSERT_NULL(NULL);
} //end of test case

void test_simpleAssertCall(void)
{
    TEST_ASSERT_EQUAL_STRING("Hello, C Developer.", greet());
} //end of test case