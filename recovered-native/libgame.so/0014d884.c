/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d884  Symbol: _M_insert_aux */

/* std::vector<unsigned int, std::allocator<unsigned int>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<unsigned int*, std::vector<unsigned int,
   std::allocator<unsigned int> > >, unsigned int const&) */

undefined8 __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>>::_M_insert_aux
          (vector<unsigned_int,std::allocator<unsigned_int>> *this,__normal_iterator param_1,
          uint *param_2)

{
  int iVar1;
  vector<unsigned_int,std::allocator<unsigned_int>> *__dest;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  vector<unsigned_int,std::allocator<unsigned_int>> *local_20;
  vector<unsigned_int,std::allocator<unsigned_int>> *local_1c;
  
  puVar3 = *(undefined4 **)(this + 4);
  if (puVar3 == *(undefined4 **)(this + 8)) {
    local_20 = (vector<unsigned_int,std::allocator<unsigned_int>> *)
               _M_check_len(this,1,(char *)(DAT_0014d940 + 0x14d8c4));
    iVar1 = *(int *)this;
    __dest = local_20;
    if (local_20 != (vector<unsigned_int,std::allocator<unsigned_int>> *)0x0) {
      if (DAT_0014d944 < local_20) {
        FUN_001c430c();
      }
      __dest = (vector<unsigned_int,std::allocator<unsigned_int>> *)operator_new((int)local_20 << 2)
      ;
    }
    if ((uint *)(__dest + ((int)(param_1 - iVar1) >> 2) * 4) != (uint *)0x0) {
      *(uint *)(__dest + ((int)(param_1 - iVar1) >> 2) * 4) = *param_2;
    }
    iVar1 = (int)(param_1 - (int)*(void **)this) >> 2;
    if (iVar1 != 0) {
      memmove(__dest,*(void **)this,iVar1 << 2);
    }
    local_1c = __dest + iVar1 * 4 + 4;
    iVar1 = (int)(*(int *)(this + 4) - param_1) >> 2;
    if (iVar1 != 0) {
      memmove(local_1c,(void *)param_1,iVar1 << 2);
    }
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
    *(vector<unsigned_int,std::allocator<unsigned_int>> **)this = __dest;
    *(vector<unsigned_int,std::allocator<unsigned_int>> **)(this + 4) = local_1c + iVar1 * 4;
    *(vector<unsigned_int,std::allocator<unsigned_int>> **)(this + 8) = __dest + (int)local_20 * 4;
  }
  else {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = puVar3[-1];
    }
    iVar1 = *(int *)(this + 4);
    *(int *)(this + 4) = iVar1 + 4;
    uVar4 = *param_2;
    iVar2 = (int)((iVar1 + -4) - param_1) >> 2;
    if (iVar2 != 0) {
      memmove((void *)(iVar1 + iVar2 * -4),(void *)param_1,iVar2 * 4);
    }
    *(uint *)param_1 = uVar4;
    local_20 = this;
    local_1c = (vector<unsigned_int,std::allocator<unsigned_int>> *)param_1;
  }
  return CONCAT44(local_1c,local_20);
}


