/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00203474  Symbol: __do_find_public_src */

/* __cxxabiv1::__si_class_type_info::__do_find_public_src(int, void const*,
   __cxxabiv1::__class_type_info const*, void const*) const */

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_find_public_src
          (__si_class_type_info *this,int param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_4 == param_2) && (iVar2 = FUN_00203530(this,param_3), iVar2 != 0)) {
    return 6;
  }
  uVar1 = (**(code **)(**(int **)(this + 8) + 0x20))
                    (*(int **)(this + 8),param_1,param_2,param_3,param_4);
  return uVar1;
}


