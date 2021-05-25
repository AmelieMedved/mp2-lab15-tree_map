#include "tree_map.h"
#include <gtest.h>

using namespace std;

TEST(TTreeMap, can_create_default_value_zero)
{
  TTreeMap<int, int> a;
  EXPECT_EQ(0, a.GetCount());
}

TEST(TTreeMap, can_create_string_key_and_int_value)
{
  TTreeMap<string, int> a;
  a.Add("A0", 10);
  ASSERT_NO_THROW(a.GetCount());
}

TEST(TTreeMap, can_add_item)
{
  TTreeMap<string, int> a;
  a.Add("A0", 10);
  EXPECT_EQ(10, a["A0"]);
}

TEST(TTreeMap, can_find_item)
{
  TTreeMap<string, int> a;
  a.Add("A0", 0);
  a.Add("B1", 1);
  a.Add("C2", 2);
  EXPECT_EQ(2, a.Find("C2"));
}

TEST(TTreeMap, can_add_zero)
{
  TTreeMap<string, int> a;
  a.Add("A0", 0);

  EXPECT_EQ(0, a.Find("A0"));
}

TEST(TTreeMap, can_delete_item)
{
  TTreeMap<string, int> a;
  a.Add("A0", 0);
  a.Add("B1", 1);
  a.Add("C2", 2);
  a.Delete("B1");
  ASSERT_ANY_THROW(a.Find("B1"));
}

TEST(TTreeMap, unexpected_indexation_wont_cause_error)
{
  TTreeMap<string, int> a;
  a.Add("A0", 0);
  a.Add("B1", 1);
  a.Add("C2", 2);
  ASSERT_NO_THROW(a["E5"]);
}

TEST(TTreeMap, can_iterate_to_tree_map)
{
  TTreeMap<string, int> a;
  int tmp[3] = { 0, 1, 2 };
  int i = 0;
  a.Add("A0", 0);
  a.Add("B1", 1);
  a.Add("C2", 2);

  TTreeMap<string, int>::iterator it = a.Begin();
  while (it.IsEnd())
  {
    EXPECT_EQ(tmp[i], it.Get()->GetVal());
    it.GoNext();
    i++;
  }
}
