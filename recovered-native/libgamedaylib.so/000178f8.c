/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000178f8  Symbol: __do_dyncast */

/* __cxxabiv1::__si_class_type_info::__do_dyncast(int, __cxxabiv1::__class_type_info::__sub_kind,
   __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
   const*, __cxxabiv1::__class_type_info::__dyncast_result&) const */

undefined4 __thiscall
__cxxabiv1::__si_class_type_info::__do_dyncast
          (__si_class_type_info *this,int param_1,__sub_kind param_2,__class_type_info *param_3,
          void *param_4,__class_type_info *param_5,void *param_6,__dyncast_result *param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00017a84(this,param_3);
  if (iVar1 == 0) {
    if ((param_4 == param_6) && (iVar1 = FUN_00017a84(this,param_5), iVar1 != 0)) {
      *(__sub_kind *)(param_7 + 8) = param_2;
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(int **)(this + 8) + 0x1c))
                        (*(int **)(this + 8),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                        );
    }
  }
  else {
    *(void **)param_7 = param_4;
    *(__sub_kind *)(param_7 + 4) = param_2;
    if (param_1 < 0) {
      if (param_1 == -2) {
        *(undefined4 *)(param_7 + 0xc) = 1;
      }
      uVar2 = 0;
    }
    else {
      if (param_6 == (void *)((int)param_4 + param_1)) {
        uVar2 = 6;
      }
      else {
        uVar2 = 1;
      }
      *(undefined4 *)(param_7 + 0xc) = uVar2;
      uVar2 = 0;
    }
  }
  return uVar2;
}


