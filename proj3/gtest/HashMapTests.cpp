// HashMapTests.cpp
//
// ICS 45C Spring 2021
// Project #3: Maps and Legends
//
// Write unit tests for your HashMap class here.  I've provided a few tests
// already, though I've commented them out, because they won't compile and
// link until you've implemented some things.
//
// Of course, you'll want to write lots more of these tests yourself, because
// this is an inexpensive way to know whether things are working the way
// you expect -- including scenarios that you won't happen to hit in the
// course of testing your overall program.  (You might also want to be sure
// that your HashMap implementation is complete and correct before you try
// to write the rest of the program around it, anyway; there's a very
// substantial amount of partial credit available if all that works is
// HashMap.)

#include <gtest/gtest.h>
#include "HashMap.hpp"


TEST(HashMapTests, sizeOfNewlyCreatedHashMapIsZero)
{
   HashMap empty;
   ASSERT_EQ(0, empty.size());
}


TEST(HashMapTests, emptyMapContainsNoKeys)
{
   HashMap empty;
   ASSERT_FALSE(empty.contains("first"));
   ASSERT_FALSE(empty.contains("second"));
}


TEST(HashMapTests, containKeyAfterAddingIt)
{
   HashMap hm;
   hm.add("Boo", "perfect");
   ASSERT_TRUE(hm.contains("Boo"));
}

TEST(HashMapTests, canRetrieveValue)
{
   HashMap hm;
   hm.add("Boo", "perfect");
   ASSERT_EQ("perfect", hm.value("Boo"));
}

TEST(HashMapTests, canReturnRightNodeNumBeforeDoubling)
{
    HashMap hm;
    for (unsigned int i = 0; i < 8; i++)
            hm.add(std::to_string(i), "Boo");
    
    ASSERT_EQ(8, hm.size());
}

TEST(HashMapTests, canReturnRightBucketsNumBeforeDoubling)
{
    HashMap hm;
    for (unsigned int i = 0; i < 8; i++)
            hm.add(std::to_string(i), "Boo");
    
    ASSERT_EQ(10, hm.bucketCount());
}


TEST(HashMapTests, canReturnRightLoadFactorBeforeDoubling)
{
    HashMap hm;
    for (unsigned int i = 0; i < 8; i++)
            hm.add(std::to_string(i), "Boo");
    
    ASSERT_EQ(0.8, hm.loadFactor());
}

TEST(HashMapTests, canReturnRightValueFactorBeforeDoubling)
{
    HashMap hm;
    for (unsigned int i = 0; i < 7; i++)
            hm.add(std::to_string(i), "Boo");
    hm.add("100", "haha f:fjsdl");
    ASSERT_EQ("haha f:fjsdl", hm.value("100"));
}

TEST(HashMapTests, canReturnRightNodeNumAfterDoubling)
{
    HashMap hm;
    for (unsigned int i = 0; i < 9; i++)
            hm.add(std::to_string(i), "Boo");
    
    ASSERT_EQ(9, hm.size());
}

TEST(HashMapTests, canReturnRightBucketsNumAfterDoubling)
{
    HashMap hm;
    for (unsigned int i = 0; i < 9; i++)
            hm.add(std::to_string(i), "Boo");
    
    ASSERT_EQ(20, hm.bucketCount());
}

TEST(HashMapTests, canReturnRightValueFactorAfterDoubling)
{
    HashMap hm;
    for (unsigned int i = 0; i < 8; i++)
            hm.add(std::to_string(i), "Boo");
    hm.add("8", "haha");
    ASSERT_EQ("haha", hm.value("8"));
}

TEST(HashMapTests, canReturnRightContainsConditionAfterDoubling)
{
    HashMap hm;
    for (unsigned int i = 0; i < 800; i++)
            hm.add(std::to_string(i), "Boo");
    hm.add("1000", "haha");
    ASSERT_EQ(true, hm.contains("701"));
}