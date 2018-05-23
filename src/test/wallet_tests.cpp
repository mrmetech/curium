// Copyright (c) 2012-2014 The Bitcoin Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "wallet.h"

#include <set>
#include <stdint.h>
#include <utility>
#include <vector>

#include <boost/foreach.hpp>
#include <boost/test/unit_test.hpp>

// how many times to run all the tests to have a chance to catch errors that only show up with particular random shuffles
#define RUN_TESTS 100

// some tests fail 1% of the time due to bad luck.
// we repeat those tests this many times and only complain if all iterations of the test fail
#define RANDOM_REPEATS 5

using namespace std;

typedef set<pair<const CWalletTx*,unsigned int> > CoinSet;

BOOST_AUTO_TEST_SUITE(wallet_tests)

static CWallet wallet;
static vector<COutput> vCoins;


BOOST_AUTO_TEST_SUITE_END()
