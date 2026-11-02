/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d948  Symbol: push_back */

/* std::vector<unsigned int, std::allocator<unsigned int> >::push_back(unsigned int const&) */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,uint *param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(this + 4);
  if (puVar1 == *(uint **)(this + 8)) {
    _M_insert_aux(this,(__normal_iterator)puVar1,param_1);
  }
  else {
    if (puVar1 != (uint *)0x0) {
      *puVar1 = *param_1;
    }
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
  }
  return;
}


