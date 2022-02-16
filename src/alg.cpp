// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value == 1 || value == 0)
      return false;
  for (uint64_t i = 2; i < value; ++i)
    if (value % i == 0)
      return false;
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t count = 0, a = 1;
  while (count != n) {
      a++;
      if (checkPrime(a))
          count++;
  }
  return a;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t a = value + 1;
  while (checkPrime(a) != true)
    a++;
  return a;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t s = 0;
  for (uint64_t i = 2; i < hbound; ++i)
    if (checkPrime(i))
      s += i;
  return s;
}
