/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002035d4  Symbol: __do_find_public_src */

/* __cxxabiv1::__vmi_class_type_info::__do_find_public_src(int, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

uint __thiscall
__cxxabiv1::__vmi_class_type_info::__do_find_public_src
          (__vmi_class_type_info *this,int param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  __vmi_class_type_info *p_Var5;
  
  if ((param_2 == param_4) && (iVar4 = FUN_00203530(this,param_3), iVar4 != 0)) {
    uVar1 = 6;
  }
  else {
    iVar4 = *(int *)(this + 0xc);
    p_Var5 = this + (iVar4 + 2) * 8;
    while (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      uVar1 = *(uint *)(this + iVar4 * 8 + 0x14);
      if ((uVar1 & 2) != 0) {
        iVar3 = (int)uVar1 >> 8;
        if ((uVar1 & 1) != 0) {
          if (param_1 == -3) goto LAB_00203664;
                    /* WARNING: Load size is inaccurate */
          iVar3 = *(int *)(*param_2 + iVar3);
        }
        uVar2 = (**(code **)(**(int **)(p_Var5 + -8) + 0x20))
                          (*(int **)(p_Var5 + -8),param_1,(int)param_2 + iVar3,param_3,param_4);
        if (3 < (int)uVar2) {
          if ((uVar1 & 1) == 0) {
            return uVar2;
          }
          return uVar2 | 1;
        }
      }
LAB_00203664:
      p_Var5 = p_Var5 + -8;
    }
    uVar1 = 1;
  }
  return uVar1;
}


