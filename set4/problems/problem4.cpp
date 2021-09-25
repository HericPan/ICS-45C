#include <gtest/gtest.h>
#include "GroceryItem.hpp"
#include "GroceryPurchase.hpp"

TEST(GroceryItemTest, first)
{
    GroceryItem heric{"Heric", 4, 100, false};
    GroceryPurchase cart;
    cart.addItem(heric);
    EXPECT_EQ(400, cart.getSubtotal());
    EXPECT_EQ(400, cart.getTotal());
    
}
TEST(GroceryItemTest, second)
{
    GroceryItem heric{"Heric", 4, 100, false};
    GroceryPurchase cart;
    cart.addItem(heric);
    EXPECT_EQ(400, cart.getSubtotal());
    EXPECT_EQ(400, cart.getTotal());
    
}