/*
 * File:   newcunittest.c
 * Author: tom_ad
 *
 * Created on 22 janv. 2018, 01:21:04
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "../cplx.h"

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testSaisir_entier() {
    int result = saisir_entier();
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testSaisir_entier", testSaisir_entier))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
