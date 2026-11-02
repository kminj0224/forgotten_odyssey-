/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002014a0  Symbol: __do_catch */

/* __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

undefined4 __thiscall
__cxxabiv1::__class_type_info::__do_catch
          (__class_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = param_3;
  iVar1 = FUN_00203530();
  if (iVar1 != 0) {
    return 1;
  }
  if (3 < param_3) {
    return 0;
  }
  uVar2 = (**(code **)(*(int *)param_1 + 0x14))
                    (param_1,this,param_2,*(code **)(*(int *)param_1 + 0x14),uVar3);
  return uVar2;
}


