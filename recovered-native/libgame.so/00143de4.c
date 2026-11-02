/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143de4  Symbol: _M_insert_aux */

/* std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
   std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >*, std::vector<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> > > > >, std::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&) */

void __thiscall
std::
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
::_M_insert_aux(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                *this,__normal_iterator param_1,basic_string *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  __normal_iterator _Var5;
  __normal_iterator local_2c;
  void *local_28;
  __normal_iterator local_24;
  undefined auStack_1c [8];
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == *(int *)(this + 8)) {
    pvVar2 = (void *)_M_check_len(this,1,(char *)(DAT_00143eec + 0x143e44));
    iVar1 = *(int *)this;
    local_28 = pvVar2;
    if (pvVar2 != (void *)0x0) {
      pvVar3 = pvVar2;
      if (DAT_00143ef0 < pvVar2) {
        pvVar3 = (void *)FUN_001c430c();
      }
      local_28 = operator_new((int)pvVar3 << 2);
    }
    pvVar3 = (void *)((int)local_28 + ((int)(param_1 - iVar1) >> 2) * 4);
    if (pvVar3 != (void *)0x0) {
      FUN_001ee80c(pvVar3,param_2);
    }
    pvVar3 = local_28;
    for (local_2c = *(__normal_iterator *)this; local_2c != param_1; local_2c = local_2c + 4) {
      if (pvVar3 != (void *)0x0) {
        FUN_001ee80c(pvVar3,local_2c);
      }
      pvVar3 = (void *)((int)pvVar3 + 4);
    }
    _Var5 = *(__normal_iterator *)(this + 4);
    local_24 = param_1;
    while( true ) {
      pvVar3 = (void *)((int)pvVar3 + 4);
      if (local_24 == _Var5) break;
      if (pvVar3 != (void *)0x0) {
        FUN_001ee80c(pvVar3,local_24);
      }
      local_24 = local_24 + 4;
    }
    iVar1 = *(int *)(this + 4);
    for (iVar4 = *(int *)this; iVar4 != iVar1; iVar4 = iVar4 + 4) {
      FUN_001ed6b8(iVar4);
    }
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
    *(void **)(this + 4) = pvVar3;
    *(void **)this = local_28;
    *(void **)(this + 8) = (void *)((int)local_28 + (int)pvVar2 * 4);
  }
  else {
    if (iVar1 != 0) {
      FUN_001ee80c(iVar1,iVar1 + -4);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
    FUN_001ee80c(auStack_1c,param_2);
    iVar1 = *(int *)(this + 4) + -8;
    for (iVar4 = (int)((*(int *)(this + 4) + -8) - param_1) >> 2; 0 < iVar4; iVar4 = iVar4 + -1) {
      FUN_001ee874(iVar1,iVar1 + -4);
      iVar1 = iVar1 + -4;
    }
    FUN_001ee874(param_1,auStack_1c);
    FUN_001ed6b8(auStack_1c);
  }
  return;
}


