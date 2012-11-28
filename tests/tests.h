#include <iostream>

static int failure_results=0;
static int success_results=0;

#define TEST_VALIDITY(X) \
	if (!X.valid()) {\
	std::cerr << std::endl << "   Failure: " << #X << " is not valid" << std::endl << std::endl; \
	++failure_results; \
	} else {\
	std::cerr << "   Success: " << #X << " is valid" << std::endl; \
	++success_results; \
	}

#define TEST_FAILURE(X) \
{ \
	std::cerr << std::endl << "   Failure: " << X << std::endl << std::endl; \
	return 1; \
}

#define TEST_ASSERT(X) \
	if (!(X)) {\
	std::cerr << std::endl << "   Failure : " << #X << std::endl << std::endl; \
	++failure_results; \
	} else {\
	std::cerr << "   Success : " << #X << std::endl; \
	++success_results; \
	}

#define TEST_EXCEPTION(X,E) \
	try {\
	X; \
	std::cerr  << std::endl << "   Failure : exception " << #E << " not caught" << std::endl << std::endl; \
	++failure_results; \
} catch (E){\
	std::cerr << "   Success : exception " << #E << " caught" << std::endl; \
	++success_results; \
}
