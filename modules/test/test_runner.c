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

//
// testing game Selection logic between player and computer
extern void test_winsGame_ifPlayerSelectedPaper_and_ComputerSelectedRock(void);
extern void test_loseGame_ifPlayerSelectedScissors_and_ComputerSelectedRock(void);
extern void test_drawGame_ifPlayerSelectedRock_and_ComputerSelectedRock(void);
extern void test_winsGame_ifPlayerSelectedScissors_and_ComputerSelectedPaper(void);
extern void test_loseGame_ifPlayerSelectedRock_and_ComputerSelectedPaper(void);
extern void test_drawGame_ifPlayerSelectedPaper_and_ComputerSelectedPaper(void);
extern void test_winsGame_ifPlayerSelectedRock_and_ComputerSelectedScissors(void);
extern void test_loseGame_ifPlayerSelectedPaper_and_ComputerSelectedScissors(void);
extern void test_drawGame_ifPlayerSelectedScissors_and_ComputerSelectedScissors(void);

/*
 *  This function runs test from the external test
 *  file.
 */
int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_winsGame_ifPlayerSelectedPaper_and_ComputerSelectedRock);
    RUN_TEST(test_winsGame_ifPlayerSelectedRock_and_ComputerSelectedScissors);
    RUN_TEST(test_winsGame_ifPlayerSelectedScissors_and_ComputerSelectedPaper);
    RUN_TEST(test_loseGame_ifPlayerSelectedPaper_and_ComputerSelectedScissors);
    RUN_TEST(test_loseGame_ifPlayerSelectedRock_and_ComputerSelectedPaper);
    RUN_TEST(test_loseGame_ifPlayerSelectedScissors_and_ComputerSelectedRock);
    RUN_TEST(test_drawGame_ifPlayerSelectedPaper_and_ComputerSelectedPaper);
    RUN_TEST(test_drawGame_ifPlayerSelectedRock_and_ComputerSelectedRock);
    RUN_TEST(test_drawGame_ifPlayerSelectedScissors_and_ComputerSelectedScissors);

    return UNITY_END();
} //end of function main