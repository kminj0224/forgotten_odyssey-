/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000177cc  Symbol: __pointer_catch */

/* __cxxabiv1::__pointer_type_info::__pointer_catch(__cxxabiv1::__pbase_type_info const*, void**,
   unsigned int) const */

uint __thiscall
__cxxabiv1::__pointer_type_info::__pointer_catch
          (__pointer_type_info *this,__pbase_type_info *param_1,void **param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_3 < 2) {
    uVar2 = FUN_00017a84(*(undefined4 *)(this + 0xc),*(undefined4 *)(DAT_00017848 + 0x17814));
    if ((int)uVar2 != 0) {
      uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                        (*(int **)(param_1 + 0xc),(int)((ulonglong)uVar2 >> 0x20),param_2);
      return (uVar1 ^ 1) & 0xff;
    }
  }
  uVar1 = (**(code **)(**(int **)(this + 0xc) + 0x10))
                    (*(int **)(this + 0xc),*(undefined4 *)(param_1 + 0xc),param_2,param_3 + 2);
  return uVar1;
}


