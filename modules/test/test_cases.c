/*
 * file: test_cases.c
 * author: Michael Brockus
 * gmail: <michaelbrockus@gmail.com>
 */
#include <unity.h>
#include "project.h"

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

//
// Testing game rules for weapons used between both the
// computer and the player. It's Important to check if
// the logic is not fatal and returns the expected value.
//
void test_winsGame_ifPlayerSelectedPaper_and_ComputerSelectedRock(void)
{
    int result = 0;
    checkSelection("paper", "rock", &result);
    TEST_ASSERT_EQUAL_INT(1, result);
} // end of test case

void test_loseGame_ifPlayerSelectedScissors_and_ComputerSelectedRock(void)
{
    int result = 0;
    checkSelection("scissors", "rock", &result);
    TEST_ASSERT_EQUAL_INT(0, result);
} // end of test case

void test_drawGame_ifPlayerSelectedRock_and_ComputerSelectedRock(void)
{
    int result = 0;
    checkSelection("rock", "rock", &result);
    TEST_ASSERT_EQUAL_INT(2, result);
} // end of test case

void test_winsGame_ifPlayerSelectedScissors_and_ComputerSelectedPaper(void)
{
    int result = 0;
    checkSelection("scissors", "paper", &result);
    TEST_ASSERT_EQUAL_INT(1, result);
} // end of test case

void test_loseGame_ifPlayerSelectedRock_and_ComputerSelectedPaper(void)
{
    int result = 0;
    checkSelection("rock", "paper", &result);
    TEST_ASSERT_EQUAL_INT(0, result);
} // end of test case

void test_drawGame_ifPlayerSelectedPaper_and_ComputerSelectedPaper(void)
{
    int result = 0;
    checkSelection("paper", "paper", &result);
    TEST_ASSERT_EQUAL_INT(2, result);
} // end of test case

void test_winsGame_ifPlayerSelectedRock_and_ComputerSelectedScissors(void)
{
    int result = 0;
    checkSelection("rock", "scissors", &result);
    TEST_ASSERT_EQUAL_INT(1, result);
} // end of test case

void test_loseGame_ifPlayerSelectedPaper_and_ComputerSelectedScissors(void)
{
    int result = 0;
    checkSelection("paper", "scissors", &result);
    TEST_ASSERT_EQUAL_INT(0, result);
} // end of test case

void test_drawGame_ifPlayerSelectedScissors_and_ComputerSelectedScissors(void)
{
    int result = 0;
    checkSelection("scissors", "scissors", &result);
    TEST_ASSERT_EQUAL_INT(2, result);
} // end of test case
